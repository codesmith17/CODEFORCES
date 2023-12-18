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
    int n = ri();
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = ri();
    int s = 0, e = n - 1;
    int a = 0, b = 0, count = 0;

    while (s < e)
    {
        if (arr[s] > arr[e] and count % 2 == 0)
        {
            a += arr[s];
            s++;
        }
        else if (arr[s] < arr[e] and count % 2 == 0)
        {
            a += arr[e];
            e--;
        }
        else if (arr[s] > arr[e] and count % 2 == 1)
        {
            b += arr[s];
            s++;
        }
        else if (arr[s] < arr[e] and count % 2 == 1)
        {
            b += arr[e];
            e--;
        }

        count++;
    }
    if (n & 1)
        cout << a + arr[s] << sp << b;
    else
        cout << a << sp << b + arr[s];
    return 0;
}