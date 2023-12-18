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

#define rep(i, a, b) for (long long int i = a; i < (b); i++)
#define repdec(i, a, b) for (long long int i = (a)-1; i >= b; i--)
#define trav(a, x) for (auto &a : x)
#define sp " "
#define sz(x) (int)(x).size()
#define hashing make_pair
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

void solve()
{
    long long int n;
    cin >> n;

    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << 1 << '\n';
        return;
    }

    sort(a, a + n);
    long long int g = 0;

    for (int i = 1; i < n; i++)
    {
        g = __gcd(g, a[i] - a[i - 1]);
    }

    long long int ans = 0;
    long long int ele = a[0] - g;

    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] > g)
        {
            ele = a[i] - g;
        }
    }

    ans += (a[n - 1] - ele) / g;
    for (int i = 0; i < n; i++)
    {
        ans += (a[n - 1] - a[i]) / g;
    }

    cout << ans;

    cout << '\n';
}

int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        solve();
    }

    return 0;
}
