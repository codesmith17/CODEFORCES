#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << 4 * (sqrt(a * c / b) + sqrt(a * b / c) + sqrt(b * c / a));

    return 0;
}