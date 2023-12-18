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
        int n = ri(), m = ri();
        vector<int> arr;
        vector<int> brr;
        for (int i = 0; i < n; i++)
        {
            int x = ri();
            arr.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x = ri();
            brr.push_back(x);
        }
        int res = 0;
        for (int i = 0; i < m; i++)
            res |= brr[i];
        int max1 = 0, min1 = 0;
        for (int i = 0; i < n; i++)
        {
            max1 ^= arr[i] | res;
            min1 ^= arr[i];
        }
        cout << min(min1, max1) << " " << max(min1, max1);
        cout << endl;
    }
    return 0;
}