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

        long long int l = ri(), r = ri();
        if (r < 4)
        {
            cout << -1 << endl;
            continue;
        }
        bool flag = false;

        for (int i = l; i <= r; i++)
        {
            if (i % 2 == 0 and i / 2 != 1)
            {
                cout << i / 2 << " " << i / 2 << endl;
                flag = true;
                break;
            }
        }
        if (flag)
            continue;

        if (l == r and l % 2 == 1)
        {
            int k = INT_MIN;
            for (int i = 2; i <= (l); i++)
            {
                if (l % i == 0)
                {
                    k = i;
                    break;
                }
            }
            if (k == INT_MIN)
            {
                cout << -1 << endl;
            }
            else if (l == k)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << k << " " << l - k << endl;
            }
        }
    }
    return 0;
}