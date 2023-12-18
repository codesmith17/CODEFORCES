#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
using namespace std;

int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        bool yes = 0;
        for (int i = 0; i < s.size() / 2; i++)
            if (s[i] != s[0])
                yes = true;
        if (yes == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}