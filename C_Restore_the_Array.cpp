#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[n + 1];
        n = n - 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        
        for (int i = -1; i < n; i++)
        {
            if (i == -1)
            {
                b[i + 1] = a[0];
            }
            else if (i == n - 1)
            {
                b[i + 1] = a[n - 1];
            }
            else
                b[i + 1] = min(a[i], a[i + 1]);
        }
        for (int i = 0; i < n + 1; i++)
        {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}