#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, w;
    cin >> n;

    int n1 = 0, n2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> w;

        n1 += (w == 100);
        n2 += (w == 200);
    }

    n2 = (n2 % 2);
    n1 = n1 - 2 * n2;

    if (n1 % 2 == 0 && n1 >= 0)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}