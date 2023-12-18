#include <bits/stdc++.h>
using namespace std;
string longestRepeatedSubstring(string str)
{
    int n = str.length();
    int LCSRe[n + 1][n + 1];

    memset(LCSRe, 0, sizeof(LCSRe));

    string res;
    int res_length = 0;

    int i, index = 0;
    for (i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {

            if (str[i - 1] == str[j - 1] &&
                LCSRe[i - 1][j - 1] < (j - i))
            {
                LCSRe[i][j] = LCSRe[i - 1][j - 1] + 1;

                if (LCSRe[i][j] > res_length)
                {
                    res_length = LCSRe[i][j];
                    index = max(i, index);
                }
                if (res_length == 2)
                    goto label;
            }
            else
                LCSRe[i][j] = 0;
        }
    }
label:

    if (res_length == 2)
        return "%";
    else
        return ",";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, ans;
        cin >> s;
        if (n > 104)
        {
            cout << "YES" << endl;
            goto label;
        }
        if (n <= 104)
            ans = longestRepeatedSubstring(s);

        if (ans == "%")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    label:
        int p;
    }
    return 0;
}
