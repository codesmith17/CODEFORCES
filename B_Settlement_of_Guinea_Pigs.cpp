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

        int oks = 0, x = 0, y = 0;
        int a;
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {

            cin >> a;
            if (a == 1)
            {
                x++, y++;

                oks = max(oks, y);
                if (flag == 1)
                    flag = 0;
            }
            if (a == 2)
            {
                if (x > 1)
                    y = (x + 2) / 2;
                oks = max(y, oks);
            }
        }

        cout << oks << endl;
    }
    return 0;
}