#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << (n + 1) * (n + 1) + 1 << endl;
    }
}