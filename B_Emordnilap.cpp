#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int m = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            long long int k = n * n - n;
            for (int i = 1; i <= n; i++)
            {
                k = (k * i) % m;
            }
            cout << k << endl;
        }
    }

    return 0;
}