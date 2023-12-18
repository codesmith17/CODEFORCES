#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n * n);
        for (int i = 0; i < (int)pow(n, 2); i++)
        {
            a[i] = i + 1;
        }
        int front = 0, back = n * n - 1;
        int oks = 1;
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            vector<int> v;
            for (int j = 0; j < n; j++)
            {
                if (oks == 1)
                {
                    v.push_back(a[front]);
                    front++;
                    oks = 0;
                }
                else
                {
                    v.push_back(a[back]);
                    back--;
                    oks = 1;
                }
            }
            ans.push_back(v);
        }
        if (n % 2 == 0)
        {
            for (int i = 1; i < n; i += 2)
            {
                reverse(ans[i].begin(), ans[i].begin() + n);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
