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

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef unordered_map<ll, ll> unmap;
typedef vector<vector<ll>> vll;

#define rep(i, a, b) for (ll i = a; i < (b); i++)
#define repdec(i, a, b) for (ll i = (a)-1; i >= b; i--)
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
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        int n = ri(), k = ri(), d = ri();

        vector<int> arr(n), arr2(k);
        for (int i = 0; i < n; i++)
            arr[i] = ri();
        for (int i = 0; i < k; i++)
            arr2[i] = ri();

        do
        {
            arr2.pb(arr2[arr2.size() % k]);
        } while (arr2.size() < 5 * n);

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == i + 1)
                cnt++;
        }
        int currentScore = cnt + (d - 1) / 2;

        int cnt2 = 0;
        do
        {
            vector<int> nums(n, 0);

            for (int j = 0; j < cnt2 + 1; j++)
            {
                nums[0]++;
                if (arr2[j] >= n)
                    continue;
                nums[arr2[j]]--;
            }

            for (int j = 1; j < n; j++)
            {
                nums[j] += nums[j - 1];
            }

            int currentMatchingCount = 0;
            for (int j = 0; j < n; j++)
            {
                nums[j] += arr[j];
                if (nums[j] == j + 1)
                    currentMatchingCount++;
            }

            if (cnt2 + 1 == d)
                break;

            int tempScore = currentMatchingCount + (d - cnt2 - 2) / 2;
            currentScore = max(currentScore, tempScore);

            cnt2++;
        } while (cnt2 < 5 * n);

        cout << currentScore << endl;
    }
    return 0;
}