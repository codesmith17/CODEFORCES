#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, index;
    cin >> n >> m;
    vector<int> g1, g2;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        g1.push_back(k);
    }
    for (int i = 0; i < n; i++)
    {
        g2.push_back(i + 1);
    }

    while (1)
    {
        if (g1.size() == 1)
        {
            index = g2[0];
            break;
        }
        if (m >= g1[0])
        {
            g1.erase(g1.begin(), g1.begin() + 1);
            g2.erase(g2.begin(), g2.begin() + 1);
        }
        else
        {
            g1[0] = g1[0] - m;
            int p = g1[0];
            g1.erase(g1.begin(), g1.begin() + 1);
            g1.push_back(p);
            g2.push_back(g2[0]);
            g2.erase(g2.begin(), g2.begin() + 1);
        }
    }
    cout << index;

    return 0;
}