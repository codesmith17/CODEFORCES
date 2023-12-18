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
        int n;
        cin >> n;
        vector<pair<int, int>> k;
        int count = 1;
        int max1 = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int y;
            cin >> y;
            if (x <= 10)
            {
                k.push_back(make_pair(y, count));
                max1 = max(max1, y);
            }

            count++;
        }
        
        for (int i = 0; i < k.size(); i++)
        {
            if (k[i].first == max1)
            {
                cout << k[i].second << endl;
                
                break;
            }
        }
    }
    return 0;
}