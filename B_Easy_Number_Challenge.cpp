#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, p, d = 0;
    cin >> a >> b >> c;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                p = i * j * k;
              
                for (int f = 1; f <= p; f++)
                {
                    if (p % f == 0)
                        d++;
                }
            }
        }
    }
    cout << d % 1073741824;

    return 0;
}