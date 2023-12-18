#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    long long int countmax = 0, countleast = 0;
    cout << arr[n - 1] - arr[0];
    for (long long int i = 0; i < n; i++)
        if (arr[i] == arr[n - 1])
            countmax++;

    for (long long int i = 0; i < n; i++)
        if (arr[i] == arr[0])
            countleast++;
    if (arr[0] != arr[n - 1])
    {
        cout << " " << countleast * countmax;
    }
    else
    {
        cout << " " << countleast * (countleast - 1) / 2;
    }

    return 0;
}