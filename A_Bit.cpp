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
    int n = readi();
    int x = 0;
    while (n--)
    {
        string a = reads();

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '+' || a[i] == '-')
            {
                if (a[i] == '+')
                {
                    x++;
                    break;
                }
                else
                {
                    x--;
                    break;
                }
            }
        }
    }
    cout << x << endl;

    return 0;
}