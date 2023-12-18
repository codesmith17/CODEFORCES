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
        int n1 = ri(), n2 = ri();
        string s = rs(), x = rs();
        int count = 0;
        bool flag = false;
        while (s.size() < n2)
        {

            count++;

            s += s;
        }
        if (s.find(x) != string::npos)
            cout << count << endl;
        else
        {
            s += s;
            count++;
            if (s.find(x) != string::npos)
                cout << count << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}