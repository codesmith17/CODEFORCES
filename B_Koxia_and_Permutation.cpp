#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> ans(n);
        int last = n, j = 0;

        int first = 1;
        for (int i = 0; i < n; i++)
        {
            if (j == 1)
            {
                ans[i] = first;
                first++;
            }
            else
            {
                ans[i] = last;
                last--;
            }
            j++;
            if (j == k)
                j = 0;
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";

        cout << endl;
    }

    return 0;
}