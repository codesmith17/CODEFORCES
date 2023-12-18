
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

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = ri();
    }

    vector<int> brr(n, 0);
    int x = 0;
    int xor1 = 0;

    for (int i = 1; i < n; i++)
    {
        brr[i] = brr[i - 1] ^ arr[i - 1];
        xor1 ^= brr[i];
        x += i;
    }

    brr.front() = 0;

    for (int i = 0; i < 31; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            cnt += (brr[j] >> i) & 1;
        }

        int cnt2 = 0;
        for (int j = 0; j < n; j++)
        {
            cnt2 += (j >> i) & 1;
        }

        if (cnt != cnt2)
        {
            brr[0] |= (1 << i);
        }
    }

    for (int i = 1; i < n; i++)
    {
        brr[i] ^= brr[0];
    }

    for (int i = 0; i < n; i++)
    {
        cout << brr[i] << sp;
    }

    return 0;hi
}
