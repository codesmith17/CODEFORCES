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
        vector<char> ans;
        char k[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> k[i][j];
                if (k[i][j] >= 97 and k[i][j] <= 122)
                    ans.push_back(k[i][j]);
            }
        }
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i];
        cout << endl;
    }
    return 0;
}