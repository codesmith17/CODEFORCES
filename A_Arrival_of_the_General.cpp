#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min1 = arr[0], max1 = arr[0], mini, maxi;
    for (int i = 0; i < n; i++)
    {
        min1 = min(min1, arr[i]);
        max1 = max(max1, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min1)
            mini = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max1)
        {
        }
    }
    int count = 0;

    if (max1 == arr[0] && min1 == arr[n - 1])
    {
        cout << "0";
        return 0;
    }

    if (maxi < mini)
    {
        count += maxi;
        count += n - 1 - mini;
    }
    else
    {
        count += maxi;
        count += n - 2 - mini;
    }
    cout << count << endl;

    return 0;
}