#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a, l, r;

    string b;
    cin >> a;
    l = a.substr(0, n);
    r = a.substr(n, n);
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    b = a;
    int gt = 1, lt = 1;

    for (int i = 0; i < n; ++i)
    {
        if (l[i] >= r[i])
        {
            gt = 0;
            break;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (l[i] <= r[i])
        {
            lt = 0;
            break;
        }
    }
    if (gt == 1 || lt == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}