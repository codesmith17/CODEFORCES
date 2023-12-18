#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        long long int n;
        priority_queue<long long int> pq;
        cin >> n;
        long long int ans = 0;
        long long int k1;

        for (int i = 0; i < n; i++)
        {
            cin >> k1;

            if (k1 == 0 && pq.empty() == false)
            {
                ans += pq.top();
                pq.pop();
            }
            else if (k1 != 0)
            {
                pq.push(k1);
            }
        }

        cout << ans << endl;
    }

    return 0;
}