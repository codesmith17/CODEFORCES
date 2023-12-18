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
int read()
{
    
}
int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, g;
        cin >> n >> k >> g;
        if (k * g - (((g + 1) / 2) - 1) * n < 0)
        {
            cout << k * g << endl;
            goto label;
        }

        cout << k * g - ((((k * g - (((g + 1) / 2) - 1) * n + g - 1) / g) * g)) << endl;
    label:
        int s;
    }

    return 0;
}