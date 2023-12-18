#include <bits/stdc++.h>
using namespace std;

long long int solve(string &s)
{
    long long int cnt = 0;
    for (long long int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            cnt++;
    }
    if (cnt == s.size())
        return s.size() * 1LL * s.size();
    s += s;

    long long int n = s.size(), ans = 0, p = 0;
    {
        if (s[i] == '0')
            continue;
        long long int j = 0;
        while (i + j < n && s[i + j] == '1')
            j++;
        p = max(p, min(j, n));
        i += j - 1;
    }

    ans = p;
    long long int x = (p - 1) / 2;
    ans = max(ans, (p - x) * (x + 1));
    x++;
    ans = max(ans, (p - x) * (x + 1));
    return ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int t = 1;
    cin >> t;
    for (long long int i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
}