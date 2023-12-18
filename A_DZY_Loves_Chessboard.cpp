#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    char arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int a = 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == '.' && (i + j) % 2 == 0)
            {

                cout << "B";
                a = 0;
            }
            if (arr[i][j] == '.' && (i + j) % 2 == 1)
            {

                cout << "W";
                a = 0;
            }
            if (arr[i][j] == '-')
            {
                cout << "-";
            }
        }
        cout << endl;
    }

    return 0;
}