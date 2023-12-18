#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n + 1; i <= 9012; i++)
    {
        string s = to_string(i);

        set<int> uniDigits(s.begin(), s.end());

        if (s.size() == uniDigits.size())
        {
            cout << i;
            break;
        }
    }
    return 0;
}