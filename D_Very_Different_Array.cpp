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

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef unordered_map<int, int> unmap;
typedef vector<vector<int>> vll;

#define rep(i, a, b) for (int i = a; i < (b); i++)
#define repdec(i, a, b) for (int i = (a)-1; i >= b; i--)
#define trav(a, x) for (auto &a : x)
#define sp " "
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define pf push_front
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
#define int long long
int32_t main(int argc, char *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int arr_a[n];
        for (int i = 0; i < n; i++)
            cin >> arr_a[i];

        int arr_b[m];
        for (int i = 0; i < m; i++)
            cin >> arr_b[i];

        sort(arr_a, arr_a + n);
        sort(arr_b, arr_b + m);

        int prefix_sum_a[n];
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                prefix_sum_a[i] = arr_a[i];
            else
                prefix_sum_a[i] = arr_a[i] + prefix_sum_a[i - 1];
        }

        int prefix_sum_b[m];
        for (int i = 0; i < m; i++)
        {
            if (i == 0)
                prefix_sum_b[i] = arr_b[i];
            else
                prefix_sum_b[i] = prefix_sum_b[i - 1] + arr_b[i];
        }

        int suffix_sum_a[n];
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
                suffix_sum_a[i] = arr_a[i];
            else
                suffix_sum_a[i] = suffix_sum_a[i + 1] + arr_a[i];
        }

        int suffix_sum_b[m];
        for (int i = m - 1; i >= 0; i--)
        {
            if (i == m - 1)
                suffix_sum_b[i] = arr_b[i];
            else
                suffix_sum_b[i] = suffix_sum_b[i + 1] + arr_b[i];
        }

        int result = -1;

        for (int i = 0; i < n + 1; i++)
        {

            int sum;

            if (i == 0)
            {
                sum = suffix_sum_b[m - n + i] - prefix_sum_a[n - 1];
            }
            else if (i == n)
            {
                sum = suffix_sum_a[0] - prefix_sum_b[n - 1];
            }
            else
            {
                sum = suffix_sum_a[n - i] + suffix_sum_b[m - n + i] - prefix_sum_a[n - i - 1] - prefix_sum_b[i - 1];
            }

            result = max(sum, result);
        }

        cout << result << endl;
    }
    return 0;
}
