#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    int min1 = INT_MAX, max1 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        min1 = min(min1, arr[i][0]);
        max1 = max(max1, arr[i][1]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == min1)
        {
            if (arr[i][1] == max1)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
    cout << "-1";

    return 0;
}