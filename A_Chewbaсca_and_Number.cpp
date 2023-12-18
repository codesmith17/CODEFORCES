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
    long long a = readll();
    string s = to_string(a);
    cout << s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] >= 5)
            s[i] = 9 - s[i];
        else
            continue;
    }
    long long int k = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        k += pow(10, i) * (s[i] - '0');
    }
    cout << k << endl;
    return 0;
}