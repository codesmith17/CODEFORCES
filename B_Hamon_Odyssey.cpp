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
string rs()
{
    string a;
    cin >> a;
    return a;
}
int ri()
{
    int a;
    cin >> a;
    return a;
}
long long rll()
{
    long long a;
    cin >> a;
    return a;
}
int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = ri();
    while (t--)
    {
        cout.tie(NULL);
        long long n = rll();
        long long k = rll();
        long long pre[n];
        pre[0] = k;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                sum = pre[i];
            }
            else
            {
                pre[i] = rll();
                sum = sum & pre[i];
            }
        }
        if (sum)
        {
            cout << 1 << endl;
            continue;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            long long temp = pre[i];
            i++;
            while (i < n and temp != 0)
            {
                temp = temp & pre[i];
                i++;
            }
            if (temp == 0)
                count++;
            i--;
        }
        cout << count << endl;
    label:
        int s;
    }
    return 0;
}