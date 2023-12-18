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
        long long int n = rl(), k = rl();
        string s = rs();
        vector<long long int> arr(n);
        vector<long long int> brr(n);
        for (long long int i = 0; i < n; i++)
            arr[i] = rl();
        for (long long int i = 0; i < n; i++)
            brr[i] = rl();
        for (long long int i = 0; i < n; i++)
        {
            arr[i]--;
            brr[i]--;
        }
        long long int q = rl();
        vector<vector<long long int>> vec(k);
        for (long long int i = 0; i < n; i++)
        {
            long long int x = rl();
            x--;
            long long int j = lower_bound(brr.begin(), brr.end(), x) - brr.begin();
            vec[j].push_back(max(x, arr[j] + brr[j] - x));
        }
        for (long long int i = 0; i < k; i++)
        {
            long long int l = arr[i], r = brr[i];
            vector<long long int> &t = vec[i];
            sort(t.begin(), t.end());
            long long int sz = t.size();
            while (l < r)

            {
                while (sz >= 1 and t[sz - 1] == r)
                    sz--;
                if ((t.size() - sz) & 1)
                    swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        cout << s << endl;
    }
    return 0;
}
