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
#define trav(a, counting) for (auto &a : counting)
#define sp " "
#define sz(counting) (int)(counting).size()
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
void f(string s, int &count, int start, int end)
{
    for (int i = 0;;)
    {
        if (start > end)
            break;
        if (s[start] != s[end])
            count++;
        start++;
        end--;
    }
    return;
}
int32_t main(int argc, char *argv[])
{

    int t = ri();
    while (t--)
    {
        int n = ri();
        string s = rs();
        int count = 0;
        f(s, count, 0, n - 1);
        string res(count, '0');

        string ans(count, '0');
        if ((n ^ 1) == (n + 1))
        {
            n++;
            int counting = n - 2 * count;
            counting = counting >> 1;
            for (int i = 0; i < counting; i++)
            {
                ans.push_back('1');
                ans.push_back('0');
            }

                        cout << ans << '1' << res << endl;
            // cout << res;
            // for (int i = 0; i < counting; i++)
            // {
            //     cout << '1' << '0';
            // }
            // cout << '1';
            // cout << res;
            continue;
        }
        else
        {
            n++;
            int counting = n - 2 * count;
            string p(counting, '1');

            cout << ans << p << res << endl;
            continue;
        }
    }
    return 0;
}