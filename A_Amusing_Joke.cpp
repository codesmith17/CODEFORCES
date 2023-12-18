#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    sort(c.begin(), c.end());
    string d = a + b;
    sort(d.begin(), d.end());
    if (d == c)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}