#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;

    cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {

        cin >> arr[i];
    }
    while (1)
    {
        for (int i = 0; i < 7; i++)
        {
            sum = sum + arr[i];
            if (sum >= n)
            {
                cout << i + 1;
                break;
            }
        }
        if (sum >= n)
            break;
    }

    return 0;
}