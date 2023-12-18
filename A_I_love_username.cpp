#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int min1 = arr[1], max1 = arr[1], count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] > max1)
            count++;
        if (arr[i] < min1)
            count++;
        min1 = min(arr[i], min1);
        max1 = max(max1, arr[i]);
    }
    cout << count;
    return 0;
}