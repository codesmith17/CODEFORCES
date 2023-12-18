#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, sum = 0, count = 0;

    cin >> k;
    if (k == 0)
    {
        cout << "0";
        return 0;
    }
    int arr[12];
    for (int i = 0; i < 12; i++)
        cin >> arr[i];
    sort(arr, arr + 12, greater<int>());
    for (int i = 0; i < 12; i++)
    {
        sum += arr[i];
        if (sum >= k)
        {
            count++;
            break;
        }
        else
        {
            count++;
        }
    }
    if (count == 12 && sum < k)
        cout << "-1";
    else
        cout << count;

    return 0;
}