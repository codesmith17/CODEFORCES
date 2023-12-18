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
// int ri(int n)
// {
//     cin>>n;
//     return n;
// }
// long long int ri(long long int n)
// {
//     cin>>n;
//     return n;
// }
// string ri(string n)
// {
//     cin>>n;
//     return n;
// }
using namespace std;

int32_t main(int argc, char *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, c, h;
        cin >> b >> c >> h;
        cout << min(2 * b - 1, (2 * c + 2 * h + 1)) << endl;
    }
    return 0;
}