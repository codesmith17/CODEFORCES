#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m], arr1[m];
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    for (int i = 0; i < m; i++)
        arr1[i] = arr[i];
    int max1 = 0, min1 = 0;
    int maxn = n;
    sort(arr, arr + m, greater<int>());
    while (1)
    {
        for (int i = 0; i < m; i++)
        {
            if (maxn == 0)
                break;

            if (arr[i] > 0)
            {
                max1 = max1 + arr[i];
                arr[i]--;
                maxn--;
            }
        }
        if (maxn == 0)
            break;
    }
    cout << maxn;
    sort(arr1, arr1 + m);
    int k = 0;
    while (1)
    {
        while (1)
        {
            if (arr[k] == 0)
            {
                k++;
            }
            min1 = min1 + arr[k];
            arr[k]--;
        }
    }

    return 0;
}