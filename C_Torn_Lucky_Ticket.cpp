#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int ans = 0;
        vector<vector<int>> g(10, vector<int>(50, 0));

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (char c : v[i])
            {
                sum += ((int)c - '0');
            }
            g[v[i].size()][sum]++;
        }

        for (int i = 0; i < n; i++)
        {
            int m = v[i].size();
            vector<int> t;

            for (char c : v[i])
            {
                int p = c - '0';
                t.push_back(p);
            }

            if (m == 1)
            {
                ans += g[1][t[0]];
            }

            if (m == 2)
            {
                ans += g[2][(t[0] + t[1])];
            }

            if (m == 3)
            {
                int p = t[0] + t[1] + t[2];
                ans += g[3][p];
                p = t[0] + t[1] - t[2];
                if (p >= 0)
                    ans += g[1][p];
                p = t[1] + t[2] - t[0];
                if (p >= 0)
                    ans += g[1][p];
            }

            if (m == 4)
            {
                int p = t[0] + t[1] + t[2] + t[3];
                ans += g[4][p];
                p = t[0] + t[1] + t[2] - t[3];
                if (p >= 0)
                    ans += g[2][p];
                p = t[1] + t[2] + t[3] - t[0];
                if (p >= 0)
                    ans += g[2][p];
            }

            if (m == 5)
            {
                int p = t[0] + t[1] + t[2] + t[3] + t[4];
                ans += g[5][p];
                p = t[0] + t[1] + t[2] - t[3] - t[4];
                if (p >= 0)
                    ans += g[1][p];
                p = t[2] + t[3] + t[4] - t[0] - t[1];
                if (p >= 0)
                    ans += g[1][p];
                p = t[0] + t[1] + t[2] + t[3] - t[4];
                if (p >= 0)
                    ans += g[3][p];
                p = t[1] + t[2] + t[3] + t[4] - t[0];
                if (p >= 0)
                    ans += g[3][p];
            }
        }

        cout << ans << endl;
    }
}
