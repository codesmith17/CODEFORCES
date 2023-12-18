#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;

        int ans = INT_MAX;
        for (int i = 1; i <= 26; i++)
        {
            vector<int> ;
            for (int j = 0; j < s.size(); j++)
                if (s[j] != (char)(96 + i))
                    p.push_back(j);

            int mx = 0;
            for (int j = 0; j < p.size(); j++)
            {
                int k = 0;
                for (int f = 0; j + k < p.size() && p[j + k] == p[j] + k; f++)
                    k++;
                int sizeoks = log2(k) + 1;
                mx = max(mx, sizeoks);
                j += k - 1;
            }

            ans = min(ans, mx);
        }

        cout << ans << endl;
    }
}