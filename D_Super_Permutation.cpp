
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

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        if (n % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }

        vector<long long int> k;
        for (long long int i = 0; i < n / 2; i++)
        {
            k.push_back(i);
            k.push_back(n - i - 1);
        }

        cout << n << " ";
        for (int i = 0; i < n - 1; i++)
        {

            cout << (k[i + 1] - k[i] + n) % n << " ";
        }
        cout << endl;
    }
    return 0;
}