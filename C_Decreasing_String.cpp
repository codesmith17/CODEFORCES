#include <iostream>
#include <map>
#include <algorithm>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <stack>
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
        string s = rs();
        long long int pos = rl();
        int n = s.size();
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (pos > n - i + 0)
            {

                for (int j = 0; j < 2; j += 2)
                {
                    if (j == 0)
                    {
                        pos -= (n - i);
                    }
                }
            }
            else
            {
                x = i;
                goto label;
            }
        }
    label:
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            while (st.empty() == false and st.top() > s[i] and x > 0)
            {
                st.pop();
                x--;
            }
            st.push(s[i]);
            while (i == n - 1 and x > 0)
            {
                st.pop();
                x--;
            }
        }

        // for (int i = 0; i < pos; i++)
        // {
        //     str.push_back(st.top());
        //     st.pop();
        // }
        // reverse(str.begin(), str.end());
        // cout << str[pos - 1];
        stack<char> str;
        while (!st.empty())
        {
            str.push(st.top());
            st.pop();
        }

        char res;
        for (int i = 0; i < pos; i++)
        {
            if (i == pos - 1)
                res = str.top();
            str.pop();
        }
        cout << res;
    }
    return 0;
}
