#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sx, sy, ex, ey;
    cin >> n >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;
    if (sx == ex && sy == ey)
        cout << "0";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'E' && sx < ex)
            sx++;
        if (s[i] == 'W' && sx > ex)
            sx--;
        if (s[i] == 'N' && sy < ey)
            sy++;
        if (s[i] == 'S' && sy > ey)
            sy--;
        if (sx == ex && sy == ey)
        {
            cout << i + 1;
            return 0;
        }
    }

    cout << "-1";

    return 0;
}