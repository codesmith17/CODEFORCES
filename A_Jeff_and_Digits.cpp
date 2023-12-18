#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, count0 = 0;
    ;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 5)
            count++;
        if (arr[i] == 0)
            count0++;
    }

    if (count >= 9 && count0 > 0)
        for (int i = 1; i <= count - count % 9; i++)
        {
            cout << "5";
        }
    if (count >= 9 && count0 > 0)
        for (int i = 1; i <= count0; i++)
            cout << "0";
    if (count0 == 0)
        cout << "-1";
    if (count < 9 && count0 != 0)
        cout << "0";

    return 0;
}