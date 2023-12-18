// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;

            pq.pop();
            pq.push(x);
        }
        long long sum = 0;
        while (!pq.empty())
        {
            sum += (long long)pq.top();
            pq.pop();
        }
        cout << sum << "\n";
    }

    return 0;
}
