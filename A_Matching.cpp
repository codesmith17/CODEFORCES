#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '0')
        {
            cout << 0 << endl;
            continue;
        }
        int n = 0, ans = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '?')
                n++;
        }
        if (s[0] == '?')
        {
            ans *= 9;
            n--;
        }
        int k = 1;
        for (int i = 1; i <= n; i++)
        {
            ans = ans * 10;
        }

        cout << ans << endl;
    }
    return 0;
}