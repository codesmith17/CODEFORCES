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
    int min1 = arr[1];
    for (int i = 1; i <= n; i++)
        min1 = min(min1, arr[i]);
    int count = 0, pos;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == min1)
        {
            count++;
            pos = i;
        }
    }
    if (count == 1)
        cout << pos;
    else
        cout << "Still Rozdil";

    return 0;
}