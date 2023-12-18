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
        int n = ri();
        if (n < 2 and n & 1)
        {
            cout << -1 << endl;
            continue;
        }
        if (n & 1)
        {
            cout << "1 1 " << (n - 1) / 2 << endl;
            continue;
        }
        string s = to_string(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += s[i] - '0';
        // int sum = accumulate(s.begin(), s.end(), );
        if (sum % 3 == 0)
        {
            cout << 1 << sp << n / 3 << sp << n / 3 << endl;
            continue;
        }
        for (int i = 1; i < n - 1; i = i * 2)
        {
            if ((n + i) & 1)
            {
            }
            else
            {
                if (i + (n - i) / 2 + (i * ((n - i) / 2)) / __gcd(i, (n - i) / 2) == n)
                {
                    cout << i << sp << i << (n - i) / 2 << endl;
                    goto label;
                }
            }
        }
        cout << -1 << endl;
    label:
        int y;
    }
    return 0;
}