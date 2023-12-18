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
        int arr[n][n], ones = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (n % 2 != 0 && i != n / 2 && j != n / 2 && arr[i][j] == 1)
                {
                    ones++;
                }
            }
        }
        int count = 0;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                if (arr[i][j] == 1)
                {
                    if (arr[i][j] == arr[i][n - j - 1] && arr[i][j] == arr[n - 1 - i][j] && arr[i][j] == arr[n - i - 1][n - j - 1])
                    {
                        count++;
                    }
                }
            }
        }
        // cout << count << endl;
        // cout << ones / 4 << endl;

        if (count == ones / 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}