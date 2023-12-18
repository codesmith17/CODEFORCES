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
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {

            int a;
            cin >> a;
            v.push_back({a, i + 1});
        }
        sort(v.begin(), v.end());

        cout << n - 1 << endl;
        for (int i = 1; i < n; i++)
        {

            int p = (v[i][0]) % v[i - 1][0];
            if (p == 0)
            {

                cout << v[i][1] << " " << 0 << endl;
                continue;
            }
            v[i][0] = v[i][0] + v[i - 1][0] - p;

            cout << v[i][1] << " " << v[i - 1][0] - p << endl;
        }
    }

    return 0;
}