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
long long readll()
{
    long long a;
    cin >> a;
    return a;
}
int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 5;
    vector<vector<int>> k;
    pair<int, int> duo;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp = {};
        for (int j = 0; j < n; j++)
        {
            int s = readi();
            temp.pb(s);
            if (s == 1)
            {
                duo.first = i;
                duo.second = j;
            }
        }
        k.pb(temp);
    }
    cout << (abs(2 - duo.first) + abs(2 - duo.second)) << endl;
    return 0;
}