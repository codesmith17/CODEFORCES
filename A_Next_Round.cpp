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
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = ri();
    int ans = arr[k - 1], count = 0;

    if (arr[0] == 0 and arr[n - 1] == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= ans and arr[i] != 0)
            count++;
        else
            break;
    }
    cout << count << endl;
    return 0;
}