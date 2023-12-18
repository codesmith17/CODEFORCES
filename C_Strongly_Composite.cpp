#include <bits/stdc++.h>
using namespace std;
#define int long long
int z;
map<int, int> v;
map<int, int> p;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, count, z, x, oks = 0;

        cin >> n;
        v = p;
        vector<int> vec;
        vec.clear();
        z = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            for (int j = 2; j <= sqrt(x); j++)
            {
                if (!v[j] && x % j == 0)
                {
                    vec.push_back(j);
                }
                while (x % j == 0)
                {
                    v[j]++;
                    x = x / j;
                }
            }
            if (x != 1)
            {
                if (!v[x])
                {
                    vec.push_back(x);
                }
                v[x]++;
            }
        }
        for (int i = 0; i < vec.size(); i++)
        {
            oks = oks + v[vec[i]] % 2;
            z = z + v[vec[i]] / 2;
        }
        oks = oks / 3;
        cout << oks + z << endl;
    }

    return 0;
}
