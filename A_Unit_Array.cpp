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
        vector<int> arr;
        int countn = 0, countp = 0;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            arr.push_back(b);
            if (b == -1)
                countn++;
            else
                countp++;
        }
        int count = 0;
        bool flag1 = false, flag2 = false;
        while (countp < countn)
        {
            countp++;
            countn--;
            count++;
        }
        if (countp >= countn)
            flag1 = true;
        while (countn % 2 == 1)
        {
            countn--;
            countp++;
            count++;
        }
        if (countn % 2 == 0)
            flag2 = true;
        if (flag1 && flag2)
        {
            cout << count << endl;
        }
    }
    return 0;
}