#include <bits/stdc++.h>
using namespace std;




int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << endl;
            for (int i = 1, j = 3 * n; i <= (3 * n) / 2, j >= ((3 * n) / 2) + 1; i = i + 3, j = j - 3)
                cout << i << " " << j << endl;
        }
        else
        {
            cout << n / 2 + 1 << endl;
            for (int i = 1, j = 3 * n; i <= (3 * n) / 2, j >= ((3 * n) / 2) + 1; i = i + 3, j = j - 3)
                cout << i << " " << j << endl;
        }
    }
}