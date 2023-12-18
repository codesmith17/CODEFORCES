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
#include <limits>
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
    long long int t = ri();
    while (t--)
    {
        long long int n = rl();
        long long int a[n], b[n];
        for (int i = 0; i < n; i++)
            a[i] = rl();
        for (int i = 0; i < n; i++)
            b[i] = rl();
        vector<long long int> v;
        long long int y = -9223372036854775807 - 1;
        for (int i = 0; i < n; i++)
        {
            
            y = max(y, a[i] - b[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (y == a[i] - b[i])
            {
                v.push_back(i + 1);
            }
        }
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}