
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
#define int long long
int lowerBound(const vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size();

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return left;
}
void calculations(set<int> &first, set<int> &second, vector<int> &a, int &n, int &res)
{
    for (int i = 1; i < n; i++)
    {
        auto it = first.lower_bound(a[i]);
        
        int w = *first.begin() - *it;
        auto it1 = second.lower_bound(a[i]);
        int w1 = *second.begin() - *it1;
        if (w == 0 && w1 != 0)
        {
            first.insert(a[i]);
            res++;
        }
        second.insert(a[i]);
    }
}
int32_t main()
{
    int t = ri();

    while (t--)
    {
        int n = ri();

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = ri();
        }

        int res = 0;
        set<int> first, second;
        second.insert(a[0]);
        calculations(first, second, a, n, res);

        cout << res << endl;
    }
    return 0;
}