#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k = 0;
        int n;
        cin >> n;
        string s;
        cin >> s;
        char min1 = 122;
        for (int i = 0; i < s.length(); i++)
        {
            min1 = min(s[i], min1);
        }
        string p = "";

        for (int i = s.length() - 1; i >= 1; i--)
        {
            if (s[i] == min1)
            {
                k = i;
                break;
            }
        }
        p.push_back(min1);
        for (int i = 0; i < s.length(); i++)
        {
            if (i == k)
                continue;
            p.push_back(s[i]);
        }
        cout << p << endl;
    }
    return 0;
}