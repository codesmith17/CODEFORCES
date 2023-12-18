#include <iostream>
#include <map>
#include <algorithm>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
#include <cstdint>
#include <math.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef unordered_map<ll, ll> unmap;
typedef vector<vector<ll>> vll;

#define rep(i, a, b) for (ll i = a; i < (b); i++)
#define repdec(i, a, b) for (ll i = (a)-1; i >= b; i--)
#define trav(a, x) for (auto &a : x)
#define sp " "
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define pf push_front
int ri()
{
    int n;
    cin >> n;
    return n;
}
long long int rl()
{
    long long int n;
    cin >> n;
    return n;
}
string rs()
{
    string n;
    cin >> n;
    return n;
}
bool canChooseKDistinctIntegers(int n, int k, int x)
{
    if (k > x || k * n < x)
    {
        return false;
    }

    vector<bool> chosen(n + 1, false);
    for (int i = n; i > 0 && k > 0 && x > 0; i--)
    {
        if (x - i >= k - 1)
        {
            chosen[i] = true;
            x -= i;
            k--;
        }
    }

    return k == 0 && x == 0;
}
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        long long int n = rl(), k = rl(), x = rl();

        if (x > n * (n + 1) / 2 or x > n * (n + 1) / 2 - ((n - k) * (n - k + 1) / 2) or k * (k + 1) / 2 > x)
        {
            cout << "NO" << endl;
            continue;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}