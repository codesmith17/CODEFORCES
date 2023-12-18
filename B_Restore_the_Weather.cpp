#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
using namespace std;
#define int long long 

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        pair<int, int> p[n];
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            p[i].first = a;
            p[i].second = i;
        }
        int a[n], t[n];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(p + 1, p + n + 1);
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
            t[p[i].second] = a[i];
        for (int i = 1; i <= n; i++)
            cout << t[i] << ' ';
        cout << endl;
    }

    return 0;
}