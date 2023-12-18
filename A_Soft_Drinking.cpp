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
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total = l * k;
    int t1 = total / n;
    int t2 = c * d;
    int t3 = p / np;
    cout << min(t1, min(t2, t3)) / nl << endl;
    return 0;
}