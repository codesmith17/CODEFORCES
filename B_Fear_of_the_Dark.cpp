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
#include <iomanip>
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
double calculations(double a, double b, double c, double d)
{
    double min1 = min(a, b);
    double min2 = min(c, d);
    return max(min1, min2);
}
int32_t main(int argc, char *argv[])
{
    int t = ri();

    while (t--)
    {
        long long int x = rl(), y = rl(), ax = rl(), ay = rl(), bx = rl(), by = rl();
        double a = sqrt((x - ax) * (x - ax) + (y - ay) * (y - ay));
        double b = sqrt((x - bx) * (x - bx) + (y - by) * (y - by));
        double c = sqrt((ax) * (ax) + (ay) * (ay));
        double d = sqrt((bx) * (bx) + (by) * (by));
        double e = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
        double ans = calculations(a, b, c, d);
        if (a <= b and c <= d)
            cout << setprecision(11) << ans << endl;
        else if (b <= a and d <= c)
            cout << setprecision(11) << ans << endl;
        else if (e > 2 * ans)
            cout << setprecision(11) << e * 0.5 << endl;
    }
    return 0;
}