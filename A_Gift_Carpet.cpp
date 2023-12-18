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
using namespace std;


int ri()
{
    int n;
    cin >> n;
    return n;
}
long long int rl()
{
    long long int n;
    cin >> n;
    return n;
}
string rs()
{
    string n;
    cin >> n;
    return n;
}

int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s = "vika";

        vector<string> v;

        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            v.push_back(str);
        }
        int k = 0;
        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {
                if (v[j][i] == s[k])
                {
                    k++;
                    break;
                }
            }

            if (k == 4)
            {
                break;
            }
        }

        if (k == 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}