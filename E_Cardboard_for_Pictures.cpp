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
        long long int n, c;
        long long int sum = 0, square = 0;
        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            square += pow(arr[i], 2);
        }
        long long int k = c;
        k -= square;
        k = k / (4 * n);
        sum /= 2 * n;
        int res = sqrt(sum * sum + k) - sum;

        cout << res << endl;
    }
    return 0;
}
