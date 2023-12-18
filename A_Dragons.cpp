#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    int arr[n][2];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n - 1; i++)

        for (int j = 0; j < n - i - 1; j++)
            if (arr[j][0] > arr[j + 1][0])
            {
                swap(arr[j][0], arr[j + 1][0]);
                swap(arr[j][1], arr[j + 1][1]);
            }
    for (int i = 0; i < n; i++)
    {
        if (s > arr[i][0])
        {
            s = s + arr[i][1];
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}