#include <bits/stdc++.h>
using namespace std;
void solve()
{

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int oks = 0;
        for (int i = 1; i <= n; i++)
        {
            if ((arr[i] - i) % k != 0)
            {
                oks++;
            }
        }
        if (oks == 0)
        {
            cout << 0 << endl;
        }
        else if (oks <= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}