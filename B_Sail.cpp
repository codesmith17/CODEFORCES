#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n, sx, sy, ex, ey;
    cin >> n >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;
    int north = 0, south = 0, east = 0, west = 0;
    int difx = ex - sx, dify = ey - sy;
    int n1 = abs(difx) + abs(dify);
    if (difx == dify && difx == 0)
    {
        cout << "0";
        return 0;
    }

    if (difx > 0 && dify > 0)
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            count++;
            if (s[i] == 'N')
            {
                north++;
            }
            if (s[i] == 'E')
            {
                east++;
            }
            if (north + east == n1)
            {
                cout << count;
                return 0;
            }
        }
    }

    if (difx > 0 && dify < 0)
    {

        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            count++;
            if (s[i] == 'S')
            {
                south++;
            }
            if (s[i] == 'E')
            {
                east++;
            }
            if (south + east == n1)
            {
                cout << count;
                return 0;
            }
        }
        cout << "-1";
        return 0;
    }
    if (difx < 0 && dify < 0)
    {

        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            count++;
            if (s[i] == 'S')
            {
                south++;
            }
            if (s[i] == 'W')
            {
                west++;
            }
            if (south + west == n1)
            {
                cout << count;
                return 0;
            }
        }
        cout << "-1";
        return 0;
    }

    if (difx < 0 && dify == 0)
    {

        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            count++;
            if (s[i] == 'W')
            {
                west++;
            }

            if (north + west == n1)
            {
                cout << count;
                return 0;
            }
        }
        cout << "-1";
        return 0;
    }
    if (difx > 0 && dify == 0)
    {

        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            count++;
            if (s[i] == 'E')
            {
                east++;
            }

            if (north + east == n1)
            {
                cout << count;
                return 0;
            }
        }
        cout << "-1";
        return 0;
    }
    if (difx == 0 && dify > 0)
    {

        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            count++;
            if (s[i] == 'N')
            {
                north++;
            }

            if (north + west == n1)
            {
                cout << count;
                return 0;
            }
        }
        cout << "-1";
        return 0;
    }
    if (difx == 0 && dify < 0)
    {

        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            count++;
            if (s[i] == 'S')
            {
                south++;
            }

            if (south + west == n1)
            {
                cout << count;
                return 0;
            }
        }
        cout << "-1";
        return 0;
    }
    if (difx < 0 && dify > 0)
    {

        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            count++;
            if (s[i] == 'N')
            {
                north++;
            }
            if (s[i] == 'W')
            {
                west++;
            }
            if (north + west == n1)
            {
                cout << count;
                return 0;
            }
        }
        cout << "-1";
        return 0;
    }
    return 0;
}