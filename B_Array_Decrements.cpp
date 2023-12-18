#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, dif;
        cin >> n;
        vector<int> v1, v2;

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v1.push_back(k);
        }
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v2.push_back(k);
        }
      
        int k = 0;
        while (1)
        {
            for (int i = 0; i < n; i++)
            {
                if (v1[i] != 0)
                    v1[i]--;
            }

            for (int i = 0; i < n; i++)
            {
                if (v1[i] < v2[i])
                {
                    k = 1;
                    break;
                }
            }
            if (v1 == v2)
            {
                k = 2;
                break;
            }
        }
        if (k == 2)
            cout << "YES" << endl;
        if (k == 1)
            cout << "NO" << endl;
    }
    return 0;
}