#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int mul = 1;
        long long int arr[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mul = mul * arr[i];
        }

        long long int sum = mul + n - 1;

        long long int ans = sum * 2022 * 1LL;
        cout << ans << endl;
    }
    return 0;
}