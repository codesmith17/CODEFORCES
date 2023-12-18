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
        int n = ri(), sum = 0, sum1 = 0;

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x = ri();
            mp[x]++;
            if (x == 1)
                sum1 += x;
            else
                sum += x;
        }
        int max1 = INT_MIN;
        for (auto &it : mp)
        {
            max1 = max(max1, it.second);
        }

        if (max1 < (double)n / 2)
            cout << "YES" << endl;
        else
        {
            if (sum1 > sum)
            {
                
            }
        }
    }
    return 0;
}