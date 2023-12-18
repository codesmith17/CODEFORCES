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
    int n;
    cin >> n;
    int arr[3] = {0};
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        arr[0] += a;

        arr[1] += b;
        arr[2] += c;
        // for (int i = 0; i < 3; i++)
        //     cout << arr[i] << " ";
    }
    if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}