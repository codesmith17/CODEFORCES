#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1";
        return 0;
    }
    int arr[n];
    
    arr[0] = n;
    int k = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        arr[i] = k;
        k++;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}