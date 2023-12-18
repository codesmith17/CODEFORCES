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
        string s, t;
        cin >> s >> t;
        int flag = 0;
        map<char, int> m1, m2;
        for (int i = 0; i < n; i++)
        {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        for (char i = 'a'; i <= 'z'; i++)
        {
            if (m1[i] != m2[i])
            {
                flag = 1;
                break;
            }
        }
        for (int i = 0; i < min(n, k); i++)
        {
            if (n - 1 - i < k)
            {
                if (s[i] != t[i])
                {

                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}