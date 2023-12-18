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
        int k = n;
        int l;
        cin >> l;
        vector<string> p;
        while (k--)
        {

            string s;
            cin >> s;
            p.push_back(s);
        }
        int sum = 0, min1 = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum = 0;

                for (k = 0; k < l; k++)
                {

                    sum = sum + abs(p[i][k] - p[j][k]);
                }
                min1 = min(sum, min1);
            }
        }
        cout << min1 << endl;
    }

    return 0;
}