
#include <bits/stdc++.h>
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
        map<int, int> a;
        map<int, int> b;
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> brr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            cin >> brr[i];

        int count = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i == n)
            {
                a[arr[i - 1]] = max(count, a[arr[i - 1]]);
            }
            if (arr[i] == arr[i - 1])
            {
                count++;
            }
            else
            {
                a[arr[i - 1]] = max(count, a[arr[i - 1]]);
                count = 1;
            }
        }

        count = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i == n)
            {
                b[brr[i - 1]] = max(count, b[brr[i - 1]]);
            }
            if (brr[i] == brr[i - 1])
            {
                count++;
            }
            else
            {
                b[brr[i - 1]] = max(count, b[brr[i - 1]]);
                count = 1;
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, a[arr[i]] + b[arr[i]]);
        }
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, a[brr[i]] + b[brr[i]]);
        }
        cout << ans << endl;
    }
    return 0;
}