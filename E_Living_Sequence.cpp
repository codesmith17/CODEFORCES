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
        long long int n;
        cin >> n;
        vector<long long int> k;
        long long int s = 0;
        while (n > 0)
        {
            k.push_back(n % 9);
            n /= 9;
        }
        long long int size1 = k.size();
        for (long long int i= size1 - 1; i >= 0; i--)
        {
            s = s * 10 + k[i];
        }
        string p = to_string(s);
        replace(p.begin(), p.end(), '8', '9');
        replace(p.begin(), p.end(), '7', '8');
        replace(p.begin(), p.end(), '6', '7');
        replace(p.begin(), p.end(), '5', '6');
        replace(p.begin(), p.end(), '4', '5');
        cout << p << endl;
    }
    return 0;
}