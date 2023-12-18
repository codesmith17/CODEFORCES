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

        long long int n, k;
        cin >> n >> k;

        vector<long long int> arr;
        for (long long int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        long long int k1 = n, x = 0;
        k1--;
        for (long long int i = 0; i < n; i++)
        {
            if (arr[i] == arr[0])
                x++;
            if (x == k)
            {
                k1 = i;
                break;
            }
        }
        if (x <= k - 1)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            if (arr.front() == arr.back())
            {
                cout << "YES" << endl;
                continue;
            }
        }

        x = 0;
        for (int i = k1 + 1; i < n; i++)
        {
            if (arr[i] == arr.back())
                x++;
        }

        if (x > k - 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}