#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;

        int cnt[26] = {0}, cnt2[26];

        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
                cnt[s[i] - 'a']++;
        }

        for (int i = 0; i < n; i++)
        {
            cnt2[s[i] - 'a']++;
        }

        int ss = 0, mx = 0, mx2 = 0;

        for (int i = 0; i < cnt.size(); i++)
        {
            int x = cnt[i];
            ss += x;
            mx = max(mx, x);
        }

        for (int i = 0; i < cnt2.size(); i++)
        {

            int x = cnt2[i];
            mx2 = max(mx2, x);
        }

        if (mx2 > n / 2 || (n & 1))
        {
            cout << "-1" << endl;
            continue;
        }
        else
        {
            if (mx > ss - mx)
            {
                cout << mx << "\n";
            }
            else
            {
                cout << ss / 2 + (ss & 1) << "\n";
            }
        }
    }
    return 0;
}