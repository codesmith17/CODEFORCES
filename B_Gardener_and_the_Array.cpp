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
        map<int, int> mp;
        vector<int> v[n];
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            for (int j = 0; j < k; k++)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
                mp[x]++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            int f = 1;
            for (auto &x : v[i])
            {
                if (mp[x] < 2)
                    f = 0;
            }
            if (f)
            {
                cout << "YES";
                goto label;
            }
        }
        cout << "NO";
    label:
        int p;
        cout << endl;
    }

    return 0;
}