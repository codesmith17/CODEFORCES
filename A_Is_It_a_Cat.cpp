#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int i = 0;
        long long int n;
        cin >> n;
        string s;
        cin >> s;
        int k1 = 0, k2 = 0, k3 = 0, k4 = 0;

        if (s[i] == 'm' || s[i] == 'M')
        {
            while ((s[i] == 'm' || s[i] == 'M') && i < n)
            {
                k1 = 1;
                i++;
            }
        }
        else
        {
            cout << "NO" << endl;
            goto label;
        }
        if (s[i] == 'e' || s[i] == 'E')
        {
            while ((s[i] == 'e' || s[i] == 'E') && i < n)
            {
                k2 = 1;
                i++;
            }
        }
        else
        {
            cout << "NO" << endl;
            goto label;
        }
        if (s[i] == 'o' || s[i] == 'O')
        {
            while ((s[i] == 'o' || s[i] == 'O') && i < n)
            {
                k3 = 1;
                i++;
            }
        }
        else
        {
            cout << "NO" << endl;
            goto label;
        }
        if (s[i] == 'w' || s[i] == 'W')
        {
            while ((s[i] == 'w' || s[i] == 'W') && i < n)
            {
                k4 = 1;
                i++;
            }
        }
        else
        {
            cout << "NO" << endl;
            goto label;
        }
        i++;

        if (i - 1 == n && (k1 == 1 && k2 == 1 && k3 == 1 && k4 == 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    label:
        int p;
    }

    return 0;
}