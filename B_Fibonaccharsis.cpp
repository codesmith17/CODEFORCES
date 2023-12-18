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
    long long int fib[200002];
    fib[1] = 1;
    fib[0] = 0;
    for (int i = 2; i < 200002; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        if (k > 200000)
        {
            cout << 0 << endl;
            continue;
        }
        long long int res = 0, p = k - 1;
        for (int i = 0; i <= n; i++)
        {
            if ((n - i * fib[p - 1]) % fib[p])
                continue;
            int t = ((n - i * fib[p - 1]) / fib[p]);
            if (t >= i)
                res++;
        }
        cout << res << endl;
    }
    return 0;
}