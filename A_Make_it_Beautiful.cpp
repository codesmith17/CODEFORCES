#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int k = v[0], count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == k)
                count++;
        }
        if (count != n)
        {

            cout << "YES" << endl;
            sort(v.begin(), v.end());
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 1)
                {
                    cout << v[n - (i / 2) - 1] << " ";
                }
                else
                {
                    cout << v[i / 2] << " ";
                }
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
    }

    return 0;
}
