#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = n;
    float a = 0.0;
    while (n--)
    {
        double b;
        cin >> b;
        a += b;
    }
    cout << fixed << setprecision(12) << (a * 100.0) / (k * 100 * 1.0);

    return 0;
}