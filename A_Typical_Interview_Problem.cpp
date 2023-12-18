#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    string oks = "";
    for (int i = 1; i <= 500; i++)
    {
        if (i % 3 == 0)
            oks += 'F';
        if (i % 5 == 0)
            oks += 'B';
    }

    for (int i = 0; i + n < oks.length(); i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (oks[i + j] != str[j])
                flag = false;
        }
        if (flag)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}