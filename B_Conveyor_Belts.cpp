#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        x1 = x1 - 1;
        y1 = y1 - 1;
        n = n - 1;
        x1 = min(x1, n - x1);
        y1 = min(y1, n - y1);
        int k1;
        if (x1 < y1)
            k1 = x1;
        else
            k1 = y1;
        x2 = x2 - 1;
        y2 = y2 - 1;
        x2 = min(x2, n - x2);
        y2 = min(y2, n - y2);
        int k2;
        if (x2 < y2)
            k2 = x2;
        else
            k2 = y2;
        int k3 = min(k1, k2);
        int k4 = max(k1, k2);
        cout << k4 - k3 << endl;
    }
    return 0;
}