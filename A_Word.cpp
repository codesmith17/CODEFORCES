#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int u = 0, l = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
            u++;
        if (a[i] >= 97 && a[i] <= 122)
            l++;
    }

    if (u > l)
    {
        for (int i = 0; i < a.size(); i++)
        {
            cout << (char)toupper(a[i]);
        }
    }
    else
    {
        for (int i = 0; i < a.size(); i++)
        {
            cout << (char)tolower(a[i]);
        }
    }

    return 0;
}