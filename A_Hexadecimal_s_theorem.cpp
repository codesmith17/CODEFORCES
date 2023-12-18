#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
long long int f[N];

int main()
{

    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < N; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }

    long long int n;
    cin >> n;
    int k;
    if (n == 0)
    {
        cout << "0 0 0";
        return 0;
    }
    if (n == 1)
    {
        cout << "0 0 1";
        return 0;
    }
    if (n == 2)
    {
        cout << "0 1 1";
        return 0;
    }
    for (int i = 0;; i++)
    {
        if (f[i] == n)
        {
            cout << f[i - 4] << " " << f[i - 3] << " " << f[i - 1];
            return 0;
        }
    }

    return 0;
}