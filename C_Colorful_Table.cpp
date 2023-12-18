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

int ri()
{
    int n;
    cin >> n;
    return n;
}

long long int rl()
{
    long long int n;
    cin >> n;
    return n;
}

string rs()
{
    string n;
    cin >> n;
    return n;
}

int main()
{
    int t = ri();

    while (t--)
    {
        int n = ri();
        int k = ri();
        int a[n];
        for (int i = 0; i < n; i++)
            a[i] = ri();

        unordered_map<int, int> min1;
        unordered_map<int, int> max1;

        for (int i = 0; i < n; i++)
        {
            if (min1[a[i]] == 0)
                min1[a[i]] = i + 1;
            else
                min1[a[i]] = min(min1[a[i]], i + 1);
        }
        for (int i = 0; i < n; i++)
        {
            if (max1[a[i]] == 0)
                max1[a[i]] = i + 1;
            else
                max1[a[i]] = max(max1[a[i]], i + 1);
        }

        vector<int> v;
        for (int i = k; i > 0; i--)
        {
            if (min1[i] != 0 and i != k)
            {
                if (min1[i + 1] != 0)
                    max1[i] = max(max1[i], max1[i + 1]);
                if (min1[i + 1] != 0)
                    min1[i] = min(min1[i], min1[i + 1]);
            }
            if (min1[i] != 0)
                v.push_back(2 * (max1[i] - min1[i] + 1));
            else
            {
                if (i != k)
                {
                    max1[i] = max1[i + 1];
                    min1[i] = min1[i + 1];
                }
                v.push_back(0);
            }
        }

        for (int i = v.size() - 1; i >= 0; i--)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}
