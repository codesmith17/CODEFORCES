#include <iostream>
#include <map>

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
#define long long int
string reads()
{
    string a;
    cin >> a;
    return a;
}
int readi()
{
    int a;
    cin >> a;
    return a;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += abs(arr[i]);
        vector<int> k;
        for (int i = 0; i < n; i++)
            if (arr[i] != 0)
                k.push_back(arr[i]);
        cout << sum << " ";

        int p = 0, res = 0;

        for (int i = 0; i < k.size(); i++)
        {
            if (k[i] < 0)
            {
                if (p == 0)
                {
                    res++;
                    p = 1;
                }
            }
            else
            {
                p = 0;
            }
        }
        cout << res << endl;
    }
    return 0;
}
