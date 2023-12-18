#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max1 = -1, sum = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        sum = sum + b - a;
        max1 = max(max1, sum);
    }
    cout << max1;

    return 0;
}