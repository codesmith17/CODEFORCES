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
string rs()
{
    string a;
    cin >> a;
    return a;
}
int ri()
{
    int a;
    cin >> a;
    return a;
}
long long rll()
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
    int t = ri();
    while (t--)
    {
        int n = ri();

        if (n == 1)
        {
            cout << "1" << endl;
            continue;
        }
        if (n == 2)
        {
            cout << "2 1" << endl;
            continue;
        }
        if (n == 3)
        {
            cout << "2 1 3" << endl;
        }
        if (n == 4)
        {
            cout << "2 4 1 3" << endl;
        }
        if (n >= 5)
        {
            int arr[n] = {0};

            arr[0] = 3;
            arr[n - 1] = 2;
            arr[n / 2] = 1;
            int count = 4;
            for (int i = 0; i < n; i++)
                if (arr[i] == 0)
                {
                    arr[i] = count++;
                }

            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
    return 0;
}