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
    int n = ri(), k = ri();
    int arr[2 * n + 1];
    for (int i = 0; i < 2 * n + 1; i++)
        arr[i] = ri();
    for (int i = 1; i < 2 * n; i++)
    {
        if (k == 0)
            break;

        if (i & 1)
            if (arr[i] - 1 > arr[i - 1] and arr[i] - 1 > arr[i + 1])
            {
                arr[i]--;
                k--;
            }
    }
    for (int i = 0; i < 2 * n + 1; i++)
        cout << arr[i] << sp;

    return 0;
}