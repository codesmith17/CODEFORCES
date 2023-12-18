#include <iostream>
#include <map>
/*(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧*/
#include <algorithm>
#include <numeric>
#include <set>
#include <cmath>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;
#define pb push_back
string rs()
{
    string a;
    cin >> a;
    return a;
}
int ri()
{
    int a;
    cin >> a;
    return a;
}
long long rll()
{
    long long a;
    cin >> a;
    return a;
}
vector<vector<int>> splitVectorIntoSubarrays(const vector<int> &vec, int k)
{
    vector<vector<int>> subarrays;

    int n = vec.size();
    if (k <= 0 || n == 0)
    {
        return subarrays;
    }

    int subarraySize = n / k;
    int remainingElements = n % k;
    int currentIndex = 0;

    for (int i = 0; i < k; i++)
    {
        vector<int> subarray;
        int currentSubarraySize = subarraySize + (remainingElements > 0 ? 1 : 0);
        remainingElements--;

        for (int j = 0; j < currentSubarraySize; j++)
        {
            subarray.push_back(vec[currentIndex]);
            currentIndex++;
        }

        subarrays.push_back(subarray);
    }

    return subarrays;
}
int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = ri();
    while (t--)
    {
        int n = ri(), k = ri();
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            arr[i] = ri();
        int min1 = INT_MAX;
        // vector<vector<int>> subarrays = splitVectorIntoSubarrays(arr, k);
        // cout << subarrays.size();
        // for (const auto &subarray : subarrays)
        // {
        //     int sum = 0;
        //     for (int i = 0; i < subarray.size() - 1; i++)
        //     {
        //         sum += abs(subarray[i] - subarray[i + 1]);
        //     }
        //     cout << endl;
        // }
        vector<int> res;
        for (int i = 1; i < n; i++)
        {
            res.push_back(abs(arr[i] - arr[i - 1]));
        }
        sort(res.begin(), res.end(), greater<int>());
        int sum = 0;

        for (int i = k - 1; i < res.size(); i++)
        {
            sum += res[i];
        }
        cout << sum << endl;
    }
    return 0;
}