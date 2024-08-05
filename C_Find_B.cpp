#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, q;

        cin >> n >> q;
        long long int chips[2 * n];
        long long int prefix_sum[2 * n];
        for (int i = 1; i <= n; i++)
            cin >> chips[i];
        long long int special_sum[2 * n];
        for (int i = 1; i <= n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + chips[i];
            special_sum[i] = special_sum[i - 1];

            if (chips[i] == 1)
                special_sum[i] += 2;
            else
                special_sum[i]++;
        }

        while (q--)
        {
            long long int start, end;
            cin >> start >> end;

            if (start == end)
            {
                cout << "NO" << endl;
                goto label;
            }

            if (prefix_sum[end] + special_sum[start - 1] >= special_sum[end] + prefix_sum[start - 1])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        label:
            int k;
        }
    }
    return 0;
}
