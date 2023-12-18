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
        long long int n, k;
        cin >> n >> k;
        vector<int> k1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            k1.push_back(x);
        }
        int pub = 0;
        sort(k1.begin(), k1.end());
        long long int start = 0;
        long long int res = 0;
        int op;
        for (long long int start = 0; start < n; pub++)
        {
            long long int end;
            for (end = start + 1; end < n; pub++)
            {
                if (k1[end] - k1[end - 1] > k)
                {
                    break;
                }
                end++;
            }
            long long tt = end - start;
            res = max(res, tt);
            start = end;
            op = n - res;
        }
        cout << op << endl;
    }
    return 0;
}
for (int i = 0; i < n;)
{
    int j = i + 1;
    for (; j < n; j++)
    {
        p = j;
        if (a[j] - a[j - 1] > k)
        {
            break;
        }
    }
    long long oks = j - i;
    ans = max(ans, oks);
    i = j;
}
