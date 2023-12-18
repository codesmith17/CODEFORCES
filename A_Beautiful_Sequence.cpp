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
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= i + 1)
            {
                cout << "YES" << endl;
                goto label;
                break;
            }
        }

        cout << "NO" << endl;
    label:
        int p;
    }
    return 0;
}