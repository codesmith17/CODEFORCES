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

        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        int f = 0;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] != arr[n - i - 1][n - j - 1])
                    f++;
            }
        }
        cout << f << endl;
        if (n % 2 == 1)
        {
            for (int j = 0; j < n / 2; j++)
            {
                if (arr[n / 2][j] != arr[n / 2][n - j - 1])

                    f++;
            }
        }
        if (f > k)
            cout << "NO" << endl;
        else
        {
            k = k - f;
            cout << k << endl;
            if (k % 2 == 0)
                cout << "YES" << endl;
            else if (n % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}