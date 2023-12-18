#include <bits/stdc++.h>
using namespace std;

int main()
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
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= k - i)
            {
                if (ans == -1 || b[i] > b[ans - 1])
                {
                    ans = i + 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}