#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[3], count = 0, k = 0;

    while (n--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                count++;
        }
        if (count >= 2)
        {
            k++;
        }
        count = 0;
    }
    cout << k;

    return 0;
}