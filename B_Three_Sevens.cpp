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
        int store = 1;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int s;
            cin >> s;
            for (int j = 0; j < s; j++)
            {
                int a;
                cin >> a;
                mp[a] = store;
            }
            store++;
        }
        vector<int> vec(n, 0);
        for (auto i : mp)
        {
            if (i.second <= n)
            {
                vec[i.second - 1] = i.first;
            }
        }
        bool y = 1;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] == 0)
            {
                y = 0;
            }
        }
        if (y != 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << vec[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}