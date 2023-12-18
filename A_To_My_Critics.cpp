#include <iostream>
#include <map>
/*(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧*/
#include <algorithm>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
#include <cstdint>
using namespace std;

int32_t main(int argc, char *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b >= 10)
        {
            cout << "YES" << endl;
            continue;
        }
        if (c + b >= 10)
        {
            cout << "YES" << endl;
            continue;
        }
        if (a + c >= 10)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}