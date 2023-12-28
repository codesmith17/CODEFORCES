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
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int neg = 0;
        int ans = 1;
        int minindex = 0;
        int minineg = 0;

        for (int j = 0; j < n; ++j)
        {
            if (a[j] < 0)
            {
                neg += 1;
                if (a[minineg] < a[j])
                {
                    minineg = j;
                }
            }
            else if (a[j] == 0)
            {
                ans = 0;
                break;
            }
            else
            {
                if (a[minindex] > a[j])
                {
                    minindex = j;
                }
            }
        }

        if (ans)
        {
            if (neg % 2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
                cout << 1 << " " << 0 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
