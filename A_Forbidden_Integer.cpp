#include <iostream>
#include <map>
/*(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧*/
#include <algorithm>
#include <numeric>
#include <set>
#include <cmath>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;
#define pb push_back
string reads()
{
    string a;
    cin >> a;

    return a;
}
int readi()
{
    int a;
    cin >> a;

    return a;
}
long long readll()
{
    long long a;
    cin >> a;

    return a;
}
int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = readi();
    while (t--)
    {
        long long n, k, x;
        n = readll(), k = readll(), x = readll();
        if (x != 1)

        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 1; i < n + 1; i++)

            {
                cout << 1 << " ";
            }
            cout << endl;
            goto aaa;
        }
        if (n == 1 || k <= 1)

        {
            cout << "NO" << endl;
            goto aaa;
        }
        if (n & 1 == 0)

        {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i = 1; i <= n / 2; i++)

            {
                cout << 2 << " ";
            }
            cout << endl;
            goto aaa;
        }
        if (k > 2)

        {
            cout << "YES" << endl;
            cout << (n - 1) / 2 << endl;
            for (int i = 1; i <= (n - 3) / 2; i++)

            {
                cout << 2 << " ";
            }
            cout << 3;
            cout << endl;
            goto aaa;
        }
        cout << "NO" << endl;
    aaa:
        int s;
    }
    return 0;
}