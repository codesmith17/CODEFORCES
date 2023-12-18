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
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        long long int n = ri();
        vector<long long int> arr(n, 0);
        for (int i = 0; i < n; i++)
            arr[i] = ri();
        vector<vector<long long int>> brr;
        for (int i = 0; i < n; i++)
            brr.pb({arr[i], i});
        sort(brr.begin(), brr.end());
        vector<long long int> prefix(n, 0);
        vector<bool> check(n, false);

        for (int i = 0; i < n; i++)
        {
            if (i)
            {
                prefix[i] = prefix[i - 1];
            }
            if (prefix[i] >= brr[i][0])
            {
                check[i] = true;
            }
            prefix[i] += brr[i][0];
        }
        vector<long long int> nextpos(n, 0);
        long long int next = n;
        for (int i = n - 1; i >= 0; i--)
        {
            nextpos[i] = next;
            if (!check[i])
            {
                next = i;
            }
        }
        vector<long long int> res(n, 0);
        for (int i = 0; i < n; i++)
        {
            res[brr[i][1]] = nextpos[i] - 1;
        }
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << sp;
        cout << endl;
    }
    return 0;
}