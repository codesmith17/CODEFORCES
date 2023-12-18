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
        int oks = 0;
        int n = s.length();
        if (n == 1 && s[0] == '^')
            oks++;
        if (s[0] == '_')
            oks++;

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == '_' && s[i + 1] == '_')
                oks++;
        }
        if (s[s.length() - 1] == '_')
            oks++;
        cout << oks << endl;
    }
    return 0;
}