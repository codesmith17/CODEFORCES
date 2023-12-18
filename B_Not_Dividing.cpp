#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long int n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                arr[i]++;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] % arr[i] == 0)
            {
                arr[i + 1]++;
            }
            else
            {
                continue;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}