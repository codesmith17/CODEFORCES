#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x1, y1, x2, y2;
        cin >> m >> n;
        cin >> x1 >> y1 >> x2 >> y2;

        int k;
        if ((x1 == 1 || x1 == n) && (y1 == 1 || y1 == m) || (x2 == 1 || x2 == n) && (y2 == 1 || y2 == m))
        {
            k = 2;
        }

        else if (x1 == 1 || x1 == n || y1 == 1 || y1 == m || x2 == 1 || x2 == n || y2 == 1 || y2 == m)
        {
            k = 3;
        }
        else
        {
            k = 4;
        }

        cout << k << endl;
    }
    return 0;
    return 0;
}