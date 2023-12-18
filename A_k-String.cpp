#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;

    int arr[27] = {0};
    for (int i = 0; i < a.size(); i++)
    {
        arr[a[i] - 'a' + 1]++;
    }

    int k, min1 = INT_MAX;
    for (int i = 1; i <= 26; i++)
    {
        if (arr[i] > 0)
        {
            k = arr[i];
            break;
        }
    }
    for (int i = 1; i <= 26; i++)
        if (arr[i] > 0)
            min1 = min(min1, arr[i]);

    if (min1 != k)
    {
        cout<<"-1";
        return 0;
    }
        else while (k--)
        {
            for (int i = 1; i <= 26; i++)
            {
                if (arr[i] > 0)
                {
                    cout << char(i + 96);
                }
            }
        }

    return 0;
}