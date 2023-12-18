#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][4];
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
            cin >> arr[i][j];
    }
    int arr1[10][10];
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
            arr1[i][j] = 1;
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                arr1[i][j] ^= 1;
                
                arr1[i][j - 1] ^= 1;
                
                arr1[i - 1][j] ^= 1;
                arr1[i + 1][j] ^= 1;
               
                arr1[i][j + 1] ^= 1;
           
            }
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
            cout << arr1[i][j];
        cout << endl;
    }

    return 0;
}