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
typedef unordered_map<long long int, long long int> unmap;
typedef vector<vector<long long int>> vll;

#define rep(i, a, b) for (long long int i = a; i < (b); i++)
#define repdec(i, a, b) for (long long int i = (a)-1; i >= b; i--)
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
        int n;
        cin >> n;
        int m = (n * (n - 1)) / 2;
        map<int, int> mp;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for (int i = n - 1; i >= 1; i--)
        {
            auto it = mp.begin();
            cout << (it->first) << ' ';
            it->second -= i;
            if (it->second == 0)
                mp.erase(it);
        }
        cout << (int)1e9 << endl;
    }
    return 0;
}
