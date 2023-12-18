#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()

{
    int arr[5000] = {0};
    int n, count = 0;
    cin >> n;
    int k = 0;
    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 1; j <= 10000; j++)
        {
            arr[k] = i * i + j * j;
            k++;
        }
    }
    for (int i = 0; i < 20; i++)
        cout << arr[i] << " ";
    for (int i = 0; i < 10000; i++)
    {
        if (arr[i] <= n && arr[i] > 0)
            count++;
    }
    cout << count;

    return 0;
}