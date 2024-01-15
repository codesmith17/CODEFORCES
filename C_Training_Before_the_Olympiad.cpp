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
ll odd = 0, even = 0, sum = 0;

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
ll rl()
{
    ll n;
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
        ll n = rl();
        vector<ll> arr(n, 0);
        for (int i = 0; i < n; i++)
            arr[i] = rl();
        vector<ll> res;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if ((arr[i] + 1) == (arr[i] ^ 1))
                even++;
            else
                odd++;

            if (even == 0 and odd == 1)
                res.push_back(sum);
            else if (odd % 3 == 1)
                res.push_back(sum - (odd + 2) / 3);
            else
                res.push_back(sum - odd / 3);
        }
        for (auto it : res)
            cout << it << sp;
        cout << endl;
        even = 0, odd = 0, sum = 0;
    }
    return 0;
}