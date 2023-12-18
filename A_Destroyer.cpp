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
#define pb push_back
using namespace std;

int32_t main(int argc, char *argv[])
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
        int arr[101] = {0};
        bool flag = false;
        int oks[n];
        int max1 = INT_MIN;
        
        cout << s[0];
        for (int i = 0; i < n; i++)
        {
            cin >> oks[i];
        }
        for (int i = 0; i < n; i++)
        {

            max1 = max(max1, oks[i]);
            arr[oks[i]]++;
        }

        for (int i = 0; i < max1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                cout << "NO" << endl;
                goto label;
            }
        }

        cout << "YES" << endl;
    label:
        int p;
    }
    return 0;
}