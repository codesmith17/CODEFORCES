#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        int arr[n], brr[n], crr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            brr[i] = arr[i];
            crr[i] = arr[i];
        }
        
        for (int i = 0; i < k; i++)
        {
            brr[i] += x;
        }
        for (int i = k; i < n; i++)
        {
            brr[i] -= x;
        }
       
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (brr[i] >= 0)
                sum1 += brr[i];
        }

        for (int i = n - 1; i > n - k; i--)
        {
            crr[i] += x;
        }
        for (int i = 0; i <= n - k; i++)
        {
            crr[i] -= x;
        }
        for (int i = 0; i < n; i++)
        {
            if (crr[i] >= 0)
                sum2 += crr[i];
        }
        if (sum1 < 0 && sum2 < 0)
            cout << "0" << endl;
        else if (sum1 > sum2)
            cout << sum1 << endl;
        else if (sum2 >= sum1)
            cout << sum2 << endl;
    }
    return 0;
}