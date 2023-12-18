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

map<int, int> sets;

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
    for (int i = 0; i < 30; i++)
        sets[i] = 0;
    while (t--)
    {

        int cnt = ri();
        int cnt2 = ri();
        if (cnt != 1)
        {
            int cnt = 0;
            for (int i = 0; i < 30; i++)
            {
                cnt += sets[i];
                if ((cnt2 & (int)(pow(2, i))))
                {
                    if (cnt == 0)
                    {

                        cout << "NO" << endl;
                        goto label;
                    }
                    cnt--;
                }
                cnt /= 2;
            }

            cout << "YES" << endl;
        label:
            int k;
        }
        else
        {
            sets[cnt2]++;
        }
    }
    return 0;
}