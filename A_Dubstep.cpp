#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B')
        {

            i += 2;
            if (b.empty() == false && b[b.size() - 1] != ' ')
            {
                b.push_back(' ');
            }
        }
        else
        {
            b.push_back(a[i]);
        }
    }
    cout << b;

    return 0;
}