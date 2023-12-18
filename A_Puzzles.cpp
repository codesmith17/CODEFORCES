#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr, arr + m);

    int min1 = abs(arr[n - 1] - arr[0]);

    for (int i = 0; i <= m - n; i++)
    {
        min1 = min(min1, abs(arr[i + n - 1] - arr[i]));
    }
    cout << min1;

    return 0;
}