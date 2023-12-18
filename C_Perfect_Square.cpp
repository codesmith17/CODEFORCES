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

#define rep(i, op, b) for (ll i = op; i < (b); i++)
#define repdec(i, op, b) for (ll i = (op)-1; i >= b; i--)
#define trav(op, x) for (auto &op : x)
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
char rc()
{
    char n;
    cin >> n;
    return n;
}
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        int n = ri();
        vector<vector<char>> op(n, vector<char>(n, 'o'));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                op[i][j] = rc();
        }
        long long int ans = 0;
        int k = n;
        k = k << 2;
        ll f = n - 1;
        for (int i = 0; i < k; i++)
        {
            for (int j = i; j < f - i; j++)
            {

                char c1 = op[i][j];
                char c2 = op[n - 1 - j][i];
                char c3 = op[n - 1 - i][n - 1 - j];
                char c4 = op[j][n - 1 - i];

                ans += (abs(max(max(c1, c2), max(c3, c4)) - c1) + abs(max(max(c1, c2), max(c3, c4)) - c2) + abs(max(max(c1, c2), max(c3, c4)) - c3) + abs(max(max(c1, c2), max(c3, c4)) - c4));
            }
        }
        cout << ans << endl;
    }
    return 0;
}