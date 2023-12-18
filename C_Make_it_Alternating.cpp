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
const int mod = 998244353;

long long int fact(int n)
{
    if (n == 1)
        return 1;

    long long int result = 1;
    for (long long int i = 1; i <= n; i++)
    {
        result = (result % mod * i % mod) % mod;
    }
    return result;
}
long long int factorial[200001];
int32_t main(int argc, char *argv[])
{

    factorial[0] = 1;
    for (long long int i = 1; i < 200001; i++)
    {
        factorial[i] = (factorial[i - 1] * i) % mod;
    }
    long long int t = ri();
    while (t--)
    {
        string s = rs();
        vector<long long int> arr;
        for (int i = 0; i < sz(s); i++)
        {
            if (i == 0)
                arr.pb(0);
            else if (s[i] != s[i - 1])
                arr.pb(0);

            arr[arr.size() - 1]++;
        }
        long long int count1 = 0, count2 = 1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > 1)
            {
                count1 += arr[i] - 1;
                (count2 *= arr[i]) %= mod;
            }
        }
        cout << count1 << sp << (count2 * factorial[count1] % mod) << endl;
    }
    return 0;
}
