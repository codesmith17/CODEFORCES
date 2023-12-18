#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y, n, k, count = 0;
    cin >> y >> n >> k;
    for (int i = n; i <= k; i = i + n)
    {
        if (i > y)
        {
            cout << i - y << " ";
            count++;
        }
    }
    if (count == 0)
        cout << "-1";

    return 0;
}