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
        long long int n = ri();
        long long int arr[n];
        long long int brr[n];
        for (int i = 0; i < n; i++)
            arr[i] = ri();
        for (int i = 0; i < n; i++)
            brr[i] = ri();
        long long int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {

            sum1 += arr[i];
            sum2 += brr[i];
        }

        cout << min(sum1 + (n * *min_element(brr, brr + n)), sum2 + (n * *min_element(arr, arr + n))) << endl;
    }
    return 0;
}
