#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = n;
    int arr[2] = {0};
    int a, b;
    while (k--)
    {
        cin >> a >> b;
        arr[0] += a;
        arr[1] += b;
    }
    int min1 = min(arr[0], n - arr[0]);
    int min2 = min(arr[1], n - arr[1]);
    cout << min1 + min2;

    return 0;
}