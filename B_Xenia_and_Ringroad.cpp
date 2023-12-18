#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int sum = 0;
    int arr[m];
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    sum = arr[0] - 1;

    for (int i = 0; i < m - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
           
            sum = sum + n - arr[i] + arr[i + 1];
           
        }
        else
        {
           
            sum = sum + arr[i + 1] - arr[i];
        }
    }
    cout << sum;
    return 0;
}