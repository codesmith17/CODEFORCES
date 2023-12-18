#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int check = 0;

        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {

            if (s[i] - '0' >= d)
            {
                cout << s[i];
            }
            else
            {
                if (check == 0)
                {
                    check = 1;
                    cout << d;
                }
                cout << s[i];
            }
        }

        if (check == 0)
        {
            cout << d;
        }
        cout << endl;
    }
    return 0;
}