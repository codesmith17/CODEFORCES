#include <bits/stdc++.h>
using namespace std;
vector<long long int> out;
int a, b, c, d;
#define MOD 1000000007
string decimal_to_bin(int n)
{

    string bin = bitset<sizeof(int) * 8>(n).to_string();
    auto loc = bin.find('1');

    if (loc != string::npos)
        return bin.substr(loc);
    return "0";
}

long long fastfib(int n)
{
    string bin_of_n = decimal_to_bin(n);

    long long f[] = {0, 1};

    for (auto b : bin_of_n)
    {
        long long f2i1 = f[1] * f[1] + f[0] * f[0];
        long long f2i = f[0] * (2 * f[1] - f[0]);

        if (b == '0')
        {
            f[0] = f2i;
            f[1] = f2i1;
        }
        else
        {
            f[0] = f2i1;
            f[1] = f2i1 + f2i;
        }
    }

    return f[0];
}
void FastDoubling(long long int n, long long int res[])
{

    if (n == 0)
    {
        res[0] = 0;
        res[1] = 1;
        return;
    }
    FastDoubling((n / 2), res);

    a = res[0];

    b = res[1];

    c = 2 * b - a;

    if (c < 0)
        c += MOD;

    c = (a * c) % MOD;

    d = (a * a + b * b) % MOD;

    if (n % 2 == 0)
    {
        res[0] = c;
        res[1] = d;
    }
    else
    {
        res[0] = d;
        res[1] = c + d;
    }
}
bool solve(long long int x, long long int y, long long int n)
{
    if (n == 1)
        return true;
    if (min(out[n + 1] - y + 1, y) > out[n + 1] - out[n])
    {
        return false;
    }
    y = min(y, out[n + 1] - y + 1);

    return solve(y, x, n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int N = 1;
    long long int res[2] = {0};
    long long int t1 = 0, t2 = 1, nextTerm = 0;
    // for (int i = 0; i < 46; ++i)
    // {

    //     if (i == 0)
    //     {
    //         out[i] == t1;
    //         continue;
    //     }
    //     if (i == 1)
    //     {
    //         out[i] == t2;
    //         continue;
    //     }
    //     nextTerm = t1 + t2;
    //     t1 = t2;
    //     t2 = nextTerm;
    // }

    out.push_back(1);
    out.push_back(1);

    for (int i = 0; i < 49; i++)
    {
        int nextFib = out[i] + out[i + 1];
        out.push_back(nextFib);
    }

    long long int t = 1;
    cin >> t;
    while (t--)
    {
        long long int n, x, y;
        cin >> n >> x >> y;

        bool k = solve(x, y, n);
        if (k == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
