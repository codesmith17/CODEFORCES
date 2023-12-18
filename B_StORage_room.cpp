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
bool flag = true;
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        long long int n = ri();
        vector<vector<long long int>> arr(n, vector<long long int>(n, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                arr[i][j] = rl();
        vector<long long int> ans(n, pow(2, 30) - 1);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                else
                    ans[i] = ans[i] & arr[i][j] & arr[j][i];
            }
        bool flag1 = false, flag2 = false;
        for (long long int i = 0; i < n; ++i)
        {
            for (long long int j = 0; j < n; ++j)
            {
                if (i != j and arr[i][j] != (ans[i] | ans[j]))
                    flag1 = true;
            }
        }
        flag = !flag1;

        if (!flag1)
        {
            cout << "YES" << endl;
            for (long long int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}