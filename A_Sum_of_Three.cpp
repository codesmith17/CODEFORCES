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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;
        if (n == 9 or n == 6 or n == 3 or n == 0 or n == 5 or n == 4 or n == 2 or n == 1)
        {
            cout << "NO" << endl;
            goto label;
        }
        if (n % 3 == 0)
        {

            cout << "YES" << endl;
            cout << 1 << sp << 4 << sp << n - 5 << endl;
        }
        else
        {

            cout << "YES" << endl;
            cout << 1 << sp << 2 << sp << n - 3 << endl;
            goto label;
        }

    label:
        int k;
    }

    return 0;
}
