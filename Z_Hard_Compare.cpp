#include <iostream>
#include <map>
/*(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧*/
#include <algorithm>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b * log2(a) > d * log2(c))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}