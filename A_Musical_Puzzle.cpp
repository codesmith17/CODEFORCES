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
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<string> l;
        if (s.size() == 1)
            cout << 1 << endl;
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                string k = "";
                k.push_back(s[i]);
                k.push_back(s[i + 1]);
                l.insert(k);
                k = "";
            }
            cout << l.size() << endl;
        }
    }
    return 0;
}