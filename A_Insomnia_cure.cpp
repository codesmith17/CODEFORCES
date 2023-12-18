#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, m, d;
    cin >> n >> k >> l >> m >> d;
    if (n == 1)
    {
        cout << d;
        return 0;
    }
    int count = 0;
    char arr[d + 1];
    for (int i = 1; i <= d; i++)
        arr[i] = '.';
    for (int i = n; i <= d; i = i + n)
    {
        arr[i] = '!';
    }
    for (int i = k; i <= d; i = i + k)
    {
        arr[i] = '!';
    }
    for (int i = l; i <= d; i = i + l)
    {
        arr[i] = '!';
    }
    for (int i = m; i <= d; i = i + m)
    {
        arr[i] = '!';
    }
    for (int i = 1; i <= d; i++)
    {
        if (arr[i] == '!')
            count++;
    }
    cout << count;

    return 0;
}