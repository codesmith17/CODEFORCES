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
    int t = ri();
    while (t--)
    {

        int n = ri();
        vector<int> arr(n);
        map<int, int> mp;
        for (int j = 0; j < n; j++)
        {
            arr[j] = ri();
            mp[arr[j]]++;
        }

        vector<int> brr;
        for (auto it : mp)
        {
            if (it.second >= 2)
            {
                brr.push_back(it.first);
            }
        }

        if (brr.size() < 2)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            vector<int> b;
            bool one = false, two = false;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == brr.front())
                {
                    if (one)
                    {
                        b.push_back(2);
                        one = true;
                    }
                    else
                    {
                        one = true;
                        b.push_back(1);
                    }
                }
                else if (arr[i] == brr[1])
                {
                    if (two)
                    {
                        b.push_back(3);
                        two = true;
                    }
                    else
                    {
                        two = true;
                        b.push_back(1);
                    }
                }
                else
                {
                    b.push_back(1);
                }
            }

            for (int i = 0; i < sz(b); i++)
            {
                cout << b[i] << sp;
            }
            cout << endl;
        }
    }
    return 0;
}