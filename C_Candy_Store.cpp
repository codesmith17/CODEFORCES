#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i] >> b[i];
        }
        ans++;

        int hcf = 0, l = 1;
        for (int i = 0; i < n; ++i)
        {
            int prod = a[i] * b[i];
            hcf = gcd(hcf, a[i] * b[i]);
            int d = b[i] / gcd(l, b[i]);
            int compare = hcf / l;
            if (d > compare)
            {
                ans++;
                hcf = a[i] * b[i];
                l = b[i];
            }
            else
            {
                l *= d;
                if (hcf % l != 0)
                {
                    ans++;
                    hcf = a[i] * b[i];
                    l = b[i];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}