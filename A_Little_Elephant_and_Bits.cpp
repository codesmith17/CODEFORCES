#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int count = 0;
    int n = a.size();
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '0')
        {
            a.erase(i, 1);
            break;
        }
        if (a[i] == '1')
            count++;
    }
    if (count == n)
    {
        a.erase(0, 1);
        cout << a;
        return 0;
    }
    cout << a;

    return 0;
}