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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (!is_sorted(arr, arr + n))
        {
            cout << "0" << endl;
            continue;
        }
        int min1 = arr[1] - arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            min1 = min(min1, abs(arr[i] - arr[i + 1]));
        }
        // int a, b;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (abs(arr[i] - arr[i + 1]) == min1)
        //     {
        //         a = arr[i];
        //         b = arr[i + 1];
        //     }
        // }
        // int count = 0;
        // // cout << a << " " << b << endl;
        // while (a <= b)
        // {
        //     a++;
        //     b--;
        //     count++;
        // }
        // if (min1 & 1 == 1 or min1 & 1 == 0)
        cout << min1 / 2 + 1 << endl;
        // cout << count << endl;
    }
    return 0;
}