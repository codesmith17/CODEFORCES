#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<string> vec(2 * n - 2);
        vector<string> oks;
        for (int i = 0; i < 2 * n - 2; i++)
        {
            cin >> vec[i];
        }

        for (int i = 0; i < 2 * n - 2; i++)
        {
            if (vec[i].size() == n - 1)
                oks.push_back(vec[i]);
        }

        if (oks[0].substr(1) != oks[1].substr(0, n - 2))
        {
            string temp = oks[0];
            oks[0] = oks[1];
            oks[1] = temp;
        }

        string oks1 = oks[0] + oks[1][n - 2];
        string oks2 = oks1;
        for (int i = 0; i < n / 2; i++)
            swap(oks1[i], oks1[n - i - 1]);
        if (oks1 == oks2)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}