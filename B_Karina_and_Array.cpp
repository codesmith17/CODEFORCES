#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        for (long long int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        cout << max(a[0] * a[1], a[n - 2] * a[n - 1]) << endl;
    }
}