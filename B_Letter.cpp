#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int hash[53] = {0};
    int k = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[k] >= 'A' && a[k] <= 'Z')
            hash[a[k] - 'A' + 27]++;
        if (a[k] >= 'a' && a[k] <= 'z')
            hash[a[k] - 'a' + 1]++;
        k++;
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] >= 'A' && b[i] <= 'Z')
        {
            if (hash[b[i] - 'A' + 27] > 0)
                hash[b[i] - 'A' + 27]--;
            else
            {
                cout << "NO";
                return 0;
            }
        }
        if (b[i] >= 'a' && b[i] <= 'z')
        {
            if (hash[b[i] - 'a' + 1] > 0)
                hash[b[i] - 'a' + 1]--;
            else
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";

    return 0;
}