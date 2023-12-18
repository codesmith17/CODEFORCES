#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    int sum = 0;
    int min1 = INT_MAX;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % n == 0)
        cout << n;
    else
        cout << n - 1;

    return 0;
}