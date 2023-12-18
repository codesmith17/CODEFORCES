#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int c25 = 0, c50 = 0, c100 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int earn = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 25)
        {
            earn += 25;
            c25++;
        }
        else if (arr[i] == 50)
        {
            if (c25 == 0)
            {
                cout << "NO" << endl;
                exit(0);
            }
            c50++;
            earn += 25;
        }
        else if (arr[i] == 100)
        {
            if ((c25 < 3) || (c50 < 1 && c25 < 1))
            {
                cout << "NO" << endl;
                exit(0);
            }
            c100++;
            earn += 25;
        }
    }
    cout << "YES" << endl;

    return 0;
}