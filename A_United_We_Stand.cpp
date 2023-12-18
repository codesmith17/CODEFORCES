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
void check(vector<int> &arr, int &count)
{
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] % arr.back() == 0)
        {
            count++;
        }
        else
        {
            return;
        }
    }
}
void printing(vector<int> &arr, int &first, int &second)
{
    cout << first << " " << second << endl;
    for (int i = 0; i < first; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = first; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        int n = ri();
        vector<int> arr, b, c;
        for (int i = 0; i < n; i++)
        {
            int x = ri();
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        int count = 0;
        check(arr, count);
        count++;
        int first = n - count, second = count;
        if (count == n)
        {
            cout << -1 << endl;
            continue;
        }
        printing(arr, first, second);
    }
    return 0;
}