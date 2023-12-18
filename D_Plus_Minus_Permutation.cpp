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
#define ll long long

int ri()
{
    int n;
    cin >> n;
    return n;
}
long long int rl()
{
    ll int n;
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
        ll n = read(), x = read(), y = read();

        ll op = x * y / __gcd(x, y);
        ll a = (n / x) - (n / op);
        ll b = (n / y) - (n / op);

        cout << (b * b + b + a * a - 2 * a * n - a) * -1 / 2 << endl;
    }
    return 0;
}