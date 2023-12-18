

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
using namespace std;

int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int i = 0;
        int j = v[n-1];
        int mid, ans = 0;
        while (i <= j)
        {
            mid = i + (j - i) / 2;
            int l = 0, cnt = 0;
            for (int k = 0; k < n; k++)
            {
                if (v[k] - v[l] > 2 * mid)
                {
                    l = k;
                    cnt++;
                }
            }
            if (cnt >= 3)
                i = mid + 1;
            else
            {
                ans = mid, j = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
   
}

