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
    long long int t = rl();
    while (t--)
    {
        long long int n = rl();
        vector<long long int> arr;
        for (long long int i = 0; i < n; i++)
        {
            long long int x = rl();
            arr.push_back(x);
        }

        unordered_map<long long int, long long int> mp;
        mp[0]++;
        long long int cnt = 0, cnt2 = 1;
        for (long long int i = 0; i < arr.size(); i++)
        {
            cnt += arr[i] * cnt2;
            if (mp.find(cnt) != mp.end())
            {
                goto label;
            }
            cnt2 *= -1;
            mp[cnt]++;
        }
        cout << "NO" << endl;
        goto label2;
    label:
        cout << "YES" << endl;
    label2:
        int k;
    }
    return 0;
}