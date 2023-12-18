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
    int min1 = abs(arr[1] - arr[2]);
    for (int i = 1; i < n; i++)
    {
        min1 = min(min1, abs(arr[i] - arr[i + 1]));
    }
    min1 = min(min1, abs(arr[n] - arr[1]));
    

    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i] - arr[i + 1]) == min1)
        {
            cout << i << " " << i + 1;
            return 0;
        }
    }
    if (abs(arr[1] - arr[n]) == min1)
        cout << n << " "
             << "1";

    return 0;
}