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
int ri(int n)
{
    cin >> n;
    return n;
}
long long int rl(long long int n)
{
    cin >> n;
    return n;
}
string rs(string n)
{
    cin >> n;
    return n;
}

bool sortbysec(pair<int, int> a,
               pair<int, int> b)
{
    if (a.first < b.first)
        return false;
    else if (a.first > b.first)
        return true;
    return (a.second < b.second);
}
int32_t main(int argc, char *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> arr(n);
        vector<int> result;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            arr[i] %= k;

        for (int i = 0; i < n; i++)
            if (arr[i] == 0)
                result.push_back(i + 1);
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
            v[i].first = arr[i], v[i].second = i + 1;
        sort(v.begin(), v.end(), sortbysec);
        for (int i = 0; i < v.size(); i++)
            if (v[i].first != 0)
                result.push_back(v[i].second);
        for (int i = 0; i < result.size(); i++)

            cout << result[i] << ' ';
        cout << endl;
    }
    return 0;
}