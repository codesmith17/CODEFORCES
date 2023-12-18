#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    if (s[0] == s[s.size() - 1])
    {
        cout << s[0] << " ";
        for (int i = 1; i < s.size() - 1; i++)
            cout << s[i];
        cout << " " << s[s.size() - 1];
    }
    else
    {
        string a, b, c;

        for (int i = 0; i < s.size(); i++)
        {
            for (int j = s.size() - 1; j > i + 1; j--)
            {
                a = s.substr(0, i + 1);
                b = s.substr(i + 1, j - i - 1);
                c = s.substr(j, s.size() - j);
                if ((a <= b && b <= c) || (b <= a && b <= c))
                {
                    cout << a << " " << b << " " << c;
                    return;
                }
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }

    return 0;
}