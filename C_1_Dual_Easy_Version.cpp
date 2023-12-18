
#include <iostream>
#include <map>
#include <algorithm>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
#include <cstdint>
#include <math.h>
using namespace std;

int32_t main(int argc, char *argv[])
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int max1 = 0, min1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            max1 = max(max1, a[i]);
            min1 = min(min1, a[i]);
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (max1 == min1)
        {
            cout << 0 << endl;
            continue;
        }
        if (min1 == 0)
        {
            cout << n - 1 << endl;
            for (int i = 0; i < n - 1; i++)
            {
                cout << i + 2 << " " << i + 1 << endl;
            }
            continue;
        }
        if (max1 == 0)
        {
            cout << n - 1 << endl;
            for (int i = n - 2; i >= 0; i--)
            {
                cout << i + 1 << " " << i + 2 << endl;
            }
            continue;
        }
        
        if (max1 >= abs(min1))
        {
            int l = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == max1)
                {
                    l = i + 1;
                }
            }
            vector<pair<int, int>> k;
            for (int i = 0; i < n; i++)
            {
                if (max1 != a[i] && a[i] < 0)
                {
                    k.push_back({i + 1, l});
                    a[i] += max1;
                }
            }
            for (int i = 0; i < n - 1; i++)
            {
                k.push_back({i + 2, i + 1});
            }
            cout << k.size() << endl;
            for (auto it : k)
            {
                cout << it.first << " " << it.second << endl;
            }
        }
        else
        {
            int l = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == min1)
                {
                    l = i + 1;
                }
            }
            vector<pair<int, int>> k;
            for (int i = 0; i < n; i++)
            {
                if (min1 != a[i] && a[i] > 0)
                {
                    k.push_back({i + 1, l});
                    a[i] += min1;
                }
            }
            for (int i = n - 2; i >= 0; i--)
            {
                k.push_back({i + 1, i + 2});
            }
            cout << k.size() << endl;
            for (auto it : k)
            {
                cout << it.first << " " << it.second << endl;
            }
        }
    }
    return 0;
}
