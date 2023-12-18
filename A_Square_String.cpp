#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a;
        cin >> a;
        string b = "", c = "";
        for (int i = 0; i < a.size() / 2; i++)
            b.push_back(a[i]);
        for (int i = a.size() / 2 ; i < a.size(); i++)
            c.push_back(a[i]);
        // cout << b << " " << c;
        if (b == c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}