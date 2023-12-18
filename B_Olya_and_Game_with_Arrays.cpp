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
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n;
        vector<long long int> first(n);
        vector<long long int> second(n);
        long long int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            vector<long long int> arr(m);
            for (int i = 0; i < m; i++)
            {
                cin >> arr[i];
            }
            sort(arr.begin(), arr.end());
            first[i] = arr[1];
            second[i] = arr[0];
            count += first[i];
        }

        // sort(first.begin(), first.end());
        // sort(second.begin(), second.end());
        long long int res = count;
        res -= *min_element(first.begin(), first.end());
        res += *min_element(second.begin(), second.end());
        cout << res << endl;
    }
}