#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int brr[n];
        int k = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        int maxorg = max(arr[n - 1], brr[n - 1]);
        int minorg = min(arr[n - 1], brr[n - 1]);

        for (int i = 0; i < n - 1; i++)
        {
            int max1 = max(arr[i], brr[i]);

            int min1 = min(arr[i], brr[i]);
            if (max1 > maxorg || min1 > minorg)
            {
                cout << "No" << endl;
                goto label;
            }
        }
        cout << "Yes" << endl;
    label:
        int pos1, pos2;
    }
    return 0;
}