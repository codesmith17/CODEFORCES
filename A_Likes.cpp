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
        int positive = 0, negative = 0;
        for (int t, x = 0; x < n; x++)
        {
            cin >> t;
            if (t > 0)
            {
                positive++;
            }
            else
            {
                negative++;
            }
        }
        int count = 0;
        for (int x = 0; x < positive; x++)
        {
            count++;
            cout << count << " ";
        }
        for (int x = 0; x < n - positive; x++)
        {
            count--;
            cout << count << " ";
        }
        cout << endl;
        count = 0;
        for (int x = 0; x < negative; x++)
        {
            cout << 1 << " " << 0 << " ";
        }
        int k = n - negative - negative;
        for (int x = 0; x < k; x++)
        {
            count++;
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}