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
    int n = readi(), k = readi();
    cin >> n >> k;
    string s = reads();
    string temp;
    for (int i = 0; i < k; i++)
        temp.pb('G');
    for (int i = 0; i < n - k; i++)
    {
        if (s[i] == 'B')
        {
            if (s.substr(i + 1, k) == temp)
            {
                s[i + k] = 'B';
                s[i] = 'G';
            }
            if (s[i + 1] == 'G')
                swap(s[i], s[i + 1]);
        }
    }
    cout << s;
    return 0;
}