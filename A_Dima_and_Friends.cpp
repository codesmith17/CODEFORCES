#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    int arr1[6];
    for (int i = 1; i < 6; i++)
        arr1[1] = sum + i;
    for (int i = 1; i < 6; i++)
    {
        if (arr1[i] != 1)
        {
            cout << i;
            return 0;
        }
        if (arr1[i] != n + 1)
        {
            cout << i;
            return 0;
        }
        if (arr1[i] != 2 * n + 1)
        {
            cout << i;
            return 0;
        }
        if (arr1[i] != 3 * n + 1)
        {
            cout << i;
            return 0;
        }
        if (arr1[i] != 4 * n + 1)
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}