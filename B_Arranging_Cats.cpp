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
        int n;
        cin >> n;

        string s, k;
        cin >> s >> k;

        int v1 = 0, v2 = 0, v3 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != k[i])
                v1++;
            if (s[i] == '1')
                v2++;
            if (k[i] == '1')
                v3++;

            // B - Arranging Cat
        }
        cout << abs(v2 - v3) + (v1 - abs(v2 - v3)) / 2 << endl;
    }
    return 0;
}