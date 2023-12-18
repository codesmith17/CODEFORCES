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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            k = k ^ arr[i];
        }
        if (n % 2 == 0)
        {

            if (k == 0)
                cout << 0 << endl;
            else
                cout << -1 << endl;
        }
        else
        {
            cout << k << endl;
        }
    }
    return 0;
}