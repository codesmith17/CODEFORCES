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
void check(int arr[], int &n, int &count, int &max1, int &last, int &i, int &res)
{
}
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        int n = ri();

        int res = 0;
        int arr[n + 1] = {0};
        for (int i = 1; i <= n; i++)
            arr[i] = i;
        int max1 = INT_MIN;
        for (int i = 1; i <= n; i++)
        {

            int count = 0;
            int last = n;
            for (int j = 1; j < arr[i]; j++)
            {
                count += pow(j, 2);
                max1 = max(max1, (int)pow(j, 2));
            }
            for (int j = arr[i]; j <= n; j++)
            {
                int k = j;
                k *= last;
                count += k;
                max1 = max(max1, k);
                last--;
            }
            count -= max1;
            res = max(res, count);
        }
        cout << res << endl;
    }
    return 0;
}