#include <iostream>
#include <map>
/* (ﾉ◕ヮ◕) ﾉ :･ﾟ✧*/
#include <algorithm>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> p;
bool isTwoSortedArrays(const std::vector<int> &arr)
{
    int n = arr.size();

    // Find the index where the first array ends and the second array starts
    int splitIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            splitIndex = i;
            break;
        }
    }

    // Check if the second array is sorted
    for (int i = splitIndex + 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }

    // Check if the first array is sorted
    for (int i = 1; i < splitIndex; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }

    // Return true if both arrays are sorted
    return true;
}
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

        int firstone = 0, lastone = 0, first = 0;
        bool flag = true;
        vector<int> k;
        cin >> firstone;
        first = firstone;
        k.push_back(1);
        lastone = firstone;
        for (int i = 1; i < n; i++)
        {
            cin >> firstone;

            if (flag)
            {
                if (firstone >= lastone)
                {
                    k.push_back(1);
                    lastone = firstone;
                }
                else if (firstone <= first)
                {
                    flag = 0;
                    k.push_back(1);
                    lastone = firstone;
                }
                else
                {
                    k.push_back(0);
                }
            }
            else
            {
                if (firstone >= lastone && firstone <= first)
                {
                    k.push_back(1);
                    lastone = firstone;
                }
                else
                {
                    k.push_back(0);
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << k[i];
        cout << endl;
    }
    return 0;
}