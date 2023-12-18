#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s1, s2;
        cin >> s1 >> s2;
        int r = 0, B = 0;
        reverse(s2.begin(), s2.end()); 
        string s3 = s1 + (s2);
        int count = 0;
        for (int i = 0; i < a + b - 1; i++)
        {
            if (s3[i] == s3[i + 1])
                count++;
        }
        if (count <= 1)
        {
            cout << "YES" << endl;
        }

        else
            cout << "NO" << endl;
    }
    return 0;
}