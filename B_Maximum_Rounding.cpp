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
// int32_t main(int argc, char *argv[])
// {
//     int t = ri();
//     while (t--)
//     {
//         string n = rs();

//         for (int i = 0; i < n.size() / 2; i++)
//             swap(n[i], n[n.size() - i - 1]);
//         n.push_back('0');

//         int j = 0;
//         for (int i = 0; i < n.size() - 1; i++)
//         {
//             if (n[i] > '4')
//             {
//                 n[i + 1]++;

//                 for (int k = j; k <= i; k++)
//                 {
//                     n[k] = '0';
//                 }
//                 j = i;
//             }
//         }

//         for (int i = 0; i < n.size() / 2; i++)
//             swap(n[i], n[n.size() - i - 1]);
//         int first = 0;
//         if (n[0] == '0')
//         {
//             first++;
//         }

//         for (; first < n.size(); first++)
//         {
//             cout << n[first];
//         }
//         cout << endl;
//     }

//     return 0;
// }

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        

        reverse(s.begin(), s.end());
        s.push_back('0');
        int n = s.length();
        int count = 0;
        rep(i, 0, n - 1)
        {
            if (s[i] > '4')
            {
                s[i + 1]++;
                for (int k = count; k <= i; k++)
                {
                    s[k] = '0';
                }
                count = i;
            }
        }
       reverse(s.begin(), s.end());
        int first = 0;
        if (s[0] == '0')
        {
            first++;
        }

        for (; first < s.size(); first++)
        {
            cout << s[first];
        }
        cout << endl;
    }
}