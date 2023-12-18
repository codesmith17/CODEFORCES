#include <bits/stdc++.h>
using namespace std;
#define nl endl

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef unordered_map<ll, ll> unmap;
typedef vector<vector<ll>> vll;

template <class T>
using pq = priority_queue<T>;

#define rep(i, a, b) for (ll i = a; i < (b); i++)
#define repdec(i, a, b) for (ll i = (a)-1; i >= b; i--)
#define trav(a, x) for (auto &a : x)
#define sp " "
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define pf push_front
#define f first
#define s second
int modularExponentiation(int x, int n, int m)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            res = (1LL * res * x) % m;
        x = (1LL * x * x) % m;
        n /= 2;
    }
    return res;
}

int dp[100005]; // Assuming n <= 100000

int main()
{
    int t, n;

    cin >> n;
    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    int ans = a[0], s = 0;
    rep(i, 0, n)
    {
        s = 0;
        if (a[i] == 0)
            break;

        rep(j, i + 1, min((int)(a[i] + i), (n - 1)) + 1)
        {

            s += a[j];
        }
        ans = max(s, ans);
    }
    cout << ans << nl;
}