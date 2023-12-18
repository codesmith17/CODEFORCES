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
    if (n == 1)
    {
        cout << "YES";
        return 0;
    }
    int hash[1001] = {0};
    for (int i = 1; i <= n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 1; i <= 1000; i++)
    {
        if (hash[i] > (n / 2) + (n % 2))
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}