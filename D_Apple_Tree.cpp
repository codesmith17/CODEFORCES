#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <map>
/*(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧*/
#include <algorithm>
#include <numeric>
#include <set>
#include <cmath>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;
#define pb push_back
const int infinity = 9e5 + 1;
typedef long long ll;
vector<int> oks[infinity];
ll counter[infinity];

void dfs(ll x, ll k = -1)
{
    if (oks[x].size() == 1 && x != 1)
        counter[x] = 1;

    for (int i = 0; i < oks[x].size(); i++)
    {
        if (oks[x][i] != k)
        {
            dfs(oks[x][i], x);
            counter[x] += counter[oks[x][i]];
        }
    }
}
void SieveOfEratosthenes(int n)
{

    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            printf("%d ", p);
}
string reads()
{
    string a;
    cin >> a;
    return a;
}
int readi()
{
    int a;
    cin >> a;
    return a;
}
long long readll()
{
    long long a;
    cin >> a;
    return a;
}
int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        for (int i = 1; i <= n; i++)
            oks[i].clear(), counter[i] = 0;

        for (int i = 1; i < n; i++)
        {
            ll l, r;
            cin >> l >> r;
            oks[l].push_back(r);
            oks[r].push_back(l);
        }

        dfs(1);

        ll m;
        cin >> m;

        while (m--)
        {
            ll l, r;
            cin >> l >> r;
            cout << counter[l] * counter[r] << endl;
        }
    }
    return 0;
}
