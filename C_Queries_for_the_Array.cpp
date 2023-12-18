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
void calculations(int arr[], int &neg, int &j, bool &flag, int &i)
{
    for (int i = neg + 1; i < j; i++)
    {
        if (arr[i] == 2)
        {
            flag = false;
            break;
        }
        arr[i] = 1;
    }
    neg = j - 1;
}
int32_t main(int argc, char *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string a = rs();

        int arr[a.size()] = {0};
        int j = 0, neg = -1;
        bool flag = true;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '-')
            {
                j--;
                if (neg == j)
                    neg--;
            }
            else if (a[i] == '+')
            {
                arr[j] = 0;
                j++;
            }
            else if (a[i] == '1')
            {
                calculations(arr, neg, j, flag, i);
            }
            else
            {
                if (j <= 1 or arr[j - 1] == 1)
                {
                    flag = false;
                    break;
                }
                arr[j - 1] = 1;
                arr[j - 1]++;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
