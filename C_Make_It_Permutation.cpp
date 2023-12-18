#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long n, x1, x2;
        cin >> n >> x1 >> x2;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        long long z = 0;
        long long ans = LLONG_MAX;

        long long x = 1;

        if (a[0] != 1)
        {
            ans = x2 + n * x1;
        }

        for (int i = 0; i < n; i++)
        {

            if (a[i] < x)
            {
                z += x1;
            }
            else if (x == a[i])
            {
                x++;
                ans = min(ans, z + n * x1 - i * x1 - x1);
            }
            else
            {
                long long y = a[i] * x2 - x * x2;
                z += y;
                x = a[i];
                i--;
            }
        }
        cout << endl;

        cout << ans, z << endl;
    }
}