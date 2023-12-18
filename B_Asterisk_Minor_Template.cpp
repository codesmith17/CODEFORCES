#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin >> t;
    int k = 1;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        if (a[0] == b[0])
        {
            cout << "YES" << endl
                 << a[0] << "*" << endl;
            goto label;
        }
        else if (a[a.size() - 1] == b[b.size() - 1])
        {
            cout << "YES" << endl
                 << "*" << a.back() << endl;
            goto label;
        }
        else
        {
            for (int i = 0; i < a.size() - 1; i++)

            {
                for (int j = 0; j < b.size() - 1; j++)

                {
                    if (a[i] == b[j] && a[i + 1] == b[j + 1])

                    {
                        cout << "YES" << endl;
                        cout << "*" << b[j] << b[j + 1] << "*" << endl;
                        goto label;
                    }
                }
            }
        }
        cout << "NO" << endl;
    label:
        int p;
    }
    return 0;
}
