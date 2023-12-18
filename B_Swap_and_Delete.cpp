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

#define rep(i, str, b) for (ll i = str; i < (b); i++)
#define repdec(i, str, b) for (ll i = (str)-1; i >= b; i--)
#define trav(str, x) for (auto &str : x)
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
        string str = rs();
        int one = accumulate(str.begin(), str.end(), 0,
                             [](int currentSum, char binaryDigit)
                             {
                                 return currentSum + (binaryDigit - '0');
                             });

        int zero = str.size() - one;
        int end = str.size() - 1;
        int n = end + 1;
        end++;
        for (int i = 0; i < n; i++)
        {
            if ((str[i] == '0' and one == 0) or (str[i] == '1' and zero == 0))
                break;
            end--;
            if (str[i] == '0')
                one--;
            else
                zero--;
        }
        cout << end << endl;
    }
    return 0;
}