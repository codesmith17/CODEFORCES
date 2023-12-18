#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int f = 0, s = 0;

    for (int i = 0; i < a.size(); i++)
    {

        if (a[i] == '4')
            f++;
        else if (a[i] == '7')
            s++;
    }
    if (f + s == 4 || f + s == 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}