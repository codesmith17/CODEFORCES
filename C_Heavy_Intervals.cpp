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
        long long int n = rl();
        vector<long long int> l(n), r(n), pairs(n);
        for (int i = 0; i < n; i++)
            l[i] = rl();
        for (int i = 0; i < n; i++)
            r[i] = rl();
        for (int i = 0; i < n; i++)
            pairs[i] = rl();
        sort(pairs.begin(), pairs.end());
        vector<long long int> pairing;
        vector<pair<long long int, bool>> count;
        for (int i = 0; i < n; i++)
        {
            count.push_back({l[i], false});
            count.push_back({r[i], true});
        }
        vector<long long int> vect;
        sort(count.begin(), count.end());
        for (auto it : count)
        {
            if (!it.second)
                vect.push_back(it.first);
            else
            {
                pairing.push_back((it.first - vect[vect.size() - 1]));
                vect.erase(vect.end() - 1);
            }
        }
        for (auto it : count)
        {
            if (it.second)
            {
            }
        }
        sort(pairing.begin(), pairing.end());

        long long int res = 0;
        for (int i = 0; i < n; i++)
            res += (pairing[i] * pairs[n - i - 1]);
        cout << res << endl;
    }

    return 0;
}