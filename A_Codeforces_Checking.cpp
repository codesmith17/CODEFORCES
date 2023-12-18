#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ch;
        cin >> ch;
        string str = "codeforces";
        int k = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (ch == str[i])
            {
                k = 1;
            }
        }
        if (k == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}