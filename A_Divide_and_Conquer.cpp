#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int mini = INT_MAX, k = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 & 1)
            {
                int c = 0;
                while (arr[i] & 1)
                {
                    arr[i] = arr[i] / 2;
                    c++;
                }
                mini = min(mini, c);
                k++;
            }
            else
            {
                int c = 0;
                while (arr[i] % 2 == 0)
                {
                    arr[i] = arr[i] / 2;
                    c++;
                }
                mini = min(mini, c);
            }
        }
        if (k % 2 == 1)
            cout << mini << endl;
        else
            cout << 0 << endl;
    }
}