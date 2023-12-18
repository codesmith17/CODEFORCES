#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int arr[n + 1] = {0};
    for (int i = n; i >= 1; i--)
    {
        if ((n - i) >= a && (i - 1) <= b)
        {
            arr[i] = 1;
        }
    }
    int count = 0;
    for (int i = n; i >= 1; i--)
        if (arr[i] == 1)
            count++;
    cout << count;
    return 0;
}
