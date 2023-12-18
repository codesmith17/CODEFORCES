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
void calculations(int &m, int &k, int &a1, int &ak)
{

    if (ak > m / k)
    {
        m = m - (m / k * k);
    }
    else
    {
        m = m - (ak * k);
    }

    if (a1 > m)
    {
        m = 0;
    }
    else
    {
        m = m - a1;
    }
}
void calculations1(int &changing, int &res, int &a1, int &m, int &k)
{

    res -= m;
    m -= changing * k;

    if (a1 >= res && m > 1)
    {
        changing++;
        m = 0;
    }
}
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        int m = ri(), k = ri(), a1 = ri(), ak = ri();
        calculations(m, k, a1, ak);

        int changing = m / k;
        int res = (changing + 1) * k;
        calculations1(changing, res, a1, m, k);

        int ans = changing;
        ans += m;
        cout << ans << endl;
    }
    return 0;
}
