#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

void sol()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (int z = 0; z < m; z++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c <= 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int i = lower_bound(v.begin(), v.end(), b) - v.begin();
        int discriminant = 4 * a * c;

        if (i != n)
        {
            int check_multiply = b - v[i];
            check_multiply *= check_multiply;

            if (check_multiply < discriminant)
            {
                cout << "yes" << endl;
                cout << v[i] << endl;
                continue;
            }
        }

        if (i != 0)
        {
            i--;

            int check_multiply = b - v[i];

            check_multiply *= check_multiply;

            if (check_multiply < discriminant)
            {
                cout << "YES" << endl;
                cout << v[i] << endl;
                continue;
            }
        }

        cout << "NO" << endl;
    }

    return;
}

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }

    return 0;
}