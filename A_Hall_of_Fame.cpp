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
        string a;
        cin >> a;
        int l = 0, r = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 'L')
                l++;
            if (a[i] == 'R')
                r++;
        }
        if (l == a.size())
        {
            cout << "-1" << endl;
            continue;
        }
        if (r == a.size())
        {
            cout << "-1" << endl;
            continue;
        }
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] == 'L' && a[i + 1] == 'R')
            {
                cout << i + 1 << endl;
                break;
            }
            if (a[i] == 'R' && a[i + 1] == 'L')
            {
                cout << "0" << endl;
                break;
            }
        }
    }

    return 0;
}