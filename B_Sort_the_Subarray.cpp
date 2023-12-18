#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        int arr[n], brr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            cin >> brr[i];

        int start = 0, end = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != brr[i])
            {
                start = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] != brr[i])
            {
                end = i;
                break;
            }
        }

        for (int i = end; i < n - 1; i++)
        {
            if (brr[i] > brr[i + 1])
                break;
            else
                end = i + 1;
        }

        for (int i = start; i > 0; i--)
        {
            if (brr[i] >= brr[i - 1])
                start = i - 1;
            else
                break;
        }
        start++;
        end++;

        cout << start << " " << end << endl;
    }
    return 0;
}