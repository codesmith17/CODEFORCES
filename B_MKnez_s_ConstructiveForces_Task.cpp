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
        if (n == 3)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes\n";

            if (n % 2 == 0)
            {
                for (int i = 0; i < n / 2; i++)
                    cout << "1 -1 ";
                cout << endl;
            }
            else
            {
                int a = n / 2;
                int b = 1 - n / 2;
                for (int i = 0; i < n / 2; i++)
                    cout << b << " " << a << " ";
                cout << b << endl;
            }
        }
    }

    return 0;
}