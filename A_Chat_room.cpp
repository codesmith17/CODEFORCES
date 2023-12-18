#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.size() < 5)
    {
        cout << "NO";
        return 0;
    }
    int h = 101, e = 101, l1 = 101, l2 = 101, o = 101;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'o')
        {
            o = i;
            break;
        }
    }
    for (int i = o; i >= 0; i--)
    {
        if (s[i] == 'l' && i < o)
        {
            l2 = i;
            break;
        }
    }

    for (int i = l2; i >= 0; i--)
    {
        if (s[i] == 'l' && i < l2)
        {
            l1 = i;
            break;
        }
    }
    for (int i = l1; i >= 0; i--)
    {
        if (s[i] == 'e' && i < l1)
        {
            e = i;
            break;
        }
    }

    for (int i = e; i >= 0; i--)
    {
        if (s[i] == 'h' && i < e)
        {
            h = i;
            break;
        }
    }

    if (h < e && e < l1 && l1 < l2 && l2 < o)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}