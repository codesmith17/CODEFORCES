#include <iostream>
#include <bits/stdc++.h>
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
        int n, m;
        cin >> n >> m;

        if (m >= n && n != 1)
        {
            cout << "NO" << endl;
            goto label;
        }
        if (n % 2 == 0)
        {
            if (m >= 2)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
            goto label;
        }

        for (int i = 3; i <= sqrt(n); i = i + 2)

        {

            if (n % i == 0)
            {
                if (m >= i)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
                goto label;
            }
        }

        cout << "YES" << endl;
        goto label;
    label:
        int p;
    }
    return 0;
}