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

int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {

        string a, b;
        cin >> a >> b;
        long double n1 = a.size(), n2 = b.size();
        long double first = INT_MIN;

        if (n2 > n1)
            cout << b[0] - '0' + 9 * (n2 - 1) << endl;
        else if (n1 == n2)
        {
            for (int i = 0; i < n2; i++)
            {
                if (b[i] != a[i])
                {
                    first = i;
                    cout << b[first] - a[first] + 9 * (n2 - i - 1) << endl;
                    goto label;
                }
            }
            cout << 0 << endl;
        }
    label:
        int p;
    }
    return 0;
}