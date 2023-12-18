#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[40];
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "-1" << endl;
            continue;
        }
        else
        {
            n = n / 2;
            int out = 0;
            while (n != 0)
            {
                out++;
                arr[out] = n & 1;
                n = n / 2;
            }
            cout << out << endl;
            for (int i = out; i; i--)
            {
                cout << arr[i] + 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}