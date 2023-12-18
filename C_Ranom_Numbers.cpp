#include <iostream>
#include <map>
/*(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧*/
#include <algorithm>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int add(char c)
{
    long long ans;
    if (c == 'A')
        ans = 1;
    else if (c == 'B')
        ans = 10;
    else if (c == 'C')
        ans = 100;
    else if (c == 'D')
        ans = 1000;
    else if (c == 'E')
        ans = 10000;
    return ans;
}

long long cal(string s)
{
    int lb = -1, lc = -1, ld = -1, le = -1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'B' && lb == -1)
            lb = i;
        else if (s[i] == 'C' && lc == -1)
            lc = i;
        else if (s[i] == 'D' && ld == -1)
            ld = i;
        else if (s[i] == 'E' && le == -1)
            le = i;
    }
    long long ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i < le && s[i] < 'E')
            ans -= add(s[i]);
        else if (i < ld && s[i] < 'D')
            ans -= add(s[i]);
        else if (i < lc && s[i] < 'C')
            ans -= add(s[i]);
        else if (i < lb && s[i] < 'B')
            ans -= add(s[i]);
        else
            ans += add(s[i]);
    }
    return ans;
}



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
        int lb = -1, lc = -1, ld = -1, le = -1;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'B' && lb == -1)
                lb = i;
            else if (s[i] == 'C' && lc == -1)
                lc = i;
            else if (s[i] == 'D' && ld == -1)
                ld = i;
            else if (s[i] == 'E' && le == -1)
                le = i;
        }
        int fa = -1, fb = -1, fc = -1, fd = -1, fe = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A' && fa == -1)
                fa = i;
            else if (s[i] == 'B' && fb == -1)
                fb = i;
            else if (s[i] == 'C' && fc == -1)
                fc = i;
            else if (s[i] == 'D' && fd == -1)
                fd = i;
        }
        long long ans = INT_MIN;
        char tmp;
        if (lb != -1)
        {
            tmp = s[lb];
            for (char c = 'A'; c <= 'E'; c++)
            {
                s[lb] = c;
                ans = max(ans, cal(s));
            }
            s[lb] = tmp;
        }
        if (lc != -1)
        {
            tmp = s[lc];
            for (char c = 'A'; c <= 'E'; c++)
            {
                s[lc] = c;
                ans = max(ans, cal(s));
            }
            s[lc] = tmp;
        }
        if (ld != -1)
        {
            tmp = s[ld];
            for (char c = 'A'; c <= 'E'; c++)
            {
                s[ld] = c;
                ans = max(ans, cal(s));
            }
            s[ld] = tmp;
        }
        if (le != -1)
        {
            tmp = s[le];
            for (char c = 'A'; c <= 'E'; c++)
            {
                s[le] = c;
                ans = max(ans, cal(s));
            }
            s[le] = tmp;
        }
        if (fa != -1)
        {
            tmp = s[fa];
            for (char c = 'A'; c <= 'E'; c++)
            {
                s[fa] = c;
                ans = max(ans, cal(s));
            }
            s[fa] = tmp;
        }
        if (fb != -1)
        {
            tmp = s[fb];
            for (char c = 'A'; c <= 'E'; c++)
            {
                s[fb] = c;
                ans = max(ans, cal(s));
            }
            s[fb] = tmp;
        }
        if (fc != -1)
        {
            tmp = s[fc];
            for (char c = 'A'; c <= 'E'; c++)
            {
                s[fc] = c;
                ans = max(ans, cal(s));
            }
            s[fc] = tmp;
        }
        if (fd != -1)
        {
            tmp = s[fd];
            for (char c = 'A'; c <= 'E'; c++)
            {
                s[fd] = c;
                ans = max(ans, cal(s));
            }
        }
        cout << ans << endl;
    }
    return 0;
}