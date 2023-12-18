#include <bits/stdc++.h>
using namespace std;



int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;

        if (!(n & 1 != 0 && k % 2 == 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}