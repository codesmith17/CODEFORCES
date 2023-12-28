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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> tree_optimisation;
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

int main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        long long int n = rl();

        vector<pair<long long int, long long int>> arr;
        for (int i = 0; i < n; i++)
        {
            long long int a = rl(), b = rl();
            arr.push_back(make_pair(a, b));
        }

        auto comparator = [](const pair<int, int> &a, const pair<int, int> &b)
        {
            return a.first < b.first;
        };

        sort(arr.begin(), arr.end(), comparator);
        tree_optimisation count;

        for (long long int i = 0; i < n; i++)
        {
            count.insert(arr[i].second);
        }

        long long int ans = 0;
        for (auto it : arr)
        {

            if (count.find(it.second) != count.end())
            {
                count.erase(count.find(it.second));
                ans += count.order_of_key(it.second);
            }
        }
        cout << ans << endl;
    }
    return 0;
}