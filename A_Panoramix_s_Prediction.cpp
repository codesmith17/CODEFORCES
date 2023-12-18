#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0, p;
    for (int i = a + 1;; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 2; j <= (i); j++)
                if (i % j == 0)
                    count++;
        }
        if (count == 1)
        {
            p = i;
            break;
        }
        count = 0;
    }
   
    if (p == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}