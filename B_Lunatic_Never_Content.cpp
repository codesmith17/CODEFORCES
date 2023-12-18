#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int32_t main(int argc, char *argv[])
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }

    long long int t;
    cin >> t;
    while (t--)
    {

        long long int n;
        cin >> n;

        long long int arr[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long int x = 0, ans = 0;
        for (long long int i = 0; i < n / 2; i++)
        {
            x = abs(arr[i] - arr[n - i - 1]);
            if (x == 0)
                goto label;
            if (i == 0)
                ans = x;
            else
                ans = gcd(x, ans);
        label:
            int p;
        }

        cout << ans << endl;
    }
    return 0;
}