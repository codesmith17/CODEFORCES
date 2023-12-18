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
void calculations(bool &flag, string &a, string &b)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] == b[i] and a[i + 1] == b[i + 1] and a[i] == '0' and a[i + 1] == '1')
        {

            cout << "YES" << endl;
            flag = true;
            break;
        }
    }
    return;
}
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        string a = rs(), b = rs();

        bool flag = false;
        calculations(flag, a, b);
        if (!flag)
            cout << "NO" << endl;
    }
    return 0;
}