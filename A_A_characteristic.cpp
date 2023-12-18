#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int arr[n + 1];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] - 1)%k!=0)
                {
                    count++;
                }
        }
        if (count == 0)
            cout << 0 << endl;
    }
    return 0;
}