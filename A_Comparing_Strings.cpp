#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int hash1[27] = {0}, hash2[27] = {0};
    if (a.size() != b.size())
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < a.size(); i++)
    {
        hash1[a[i] - 'a' + 1]++;
        hash2[b[i] - 'a' + 1]++;
    }
    for (int i = 1; i <= 26; i++)
    {
       
        if (hash1[i] != hash2[i])
        {
            cout << "NO";
            return 0;
        }
    }
    set<char> s1;
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {

        if (a[i] != b[i])
            count++;
    }

    if (count == 2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}