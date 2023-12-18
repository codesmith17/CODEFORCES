#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string l = "", u = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                l.push_back(s[i]);
            if (s[i] >= 'A' && s[i] <= 'Z')
                u.push_back(s[i]);
        }

        sort(l.begin(), l.end());
        sort(u.begin(), u.end());
        cout << l << endl
             << u;
        int ui = 0, li = 0;
        while (1)
        {
            if (ui == u.size() - 1 && li == l.size() - 1)
                break;
            if (ui == u.size() && li == l.size())
                break;

            if (l[li] - u[ui] == 'b' - 'B')
            {
                l[li] = '.';
                u[ui] = '.';
                ui++;
                li++;
                continue;
            }
            if (u[ui] - 'A' > l[li] - 'a')
            {
                li++;
                continue;
            }
            if (u[ui] - 'A' < l[li] - 'a')
            {
                ui++;
                continue;
            }
        }
        cout << l << endl
             << u;
    }
    return 0;
}