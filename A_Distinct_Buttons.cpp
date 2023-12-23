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
        vector<bool> vec(4, 0);
        int n = ri();
        for (int i = 0; i < n; i++)
        {
            int a = ri(), b = ri();

            if (a > 0)
                vec[0] = true;
            if (b < 0)
                vec[1] = true;
            if (b > 0)
                vec[2] = true;
            if (a < 0)
                vec[3] = true;
        }
        if (vec[1] && vec[2] && vec[3] && vec[0])
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}