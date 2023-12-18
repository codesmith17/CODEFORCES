#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> val;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        val.insert(arr[i]);
    }
    cout << val.size() << endl;

    set<int>::iterator itr;
    int arr1[10000];
    for (itr = val.begin(); itr != val.end(); itr++)
    {
        int count = 0, k, p;
        cout << *itr << " ";
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == *itr)
            {
                count++;
                if (count == 1)
                {
                    p = i;
                }
                if (count == 2)
                {
                    k = i;
                    break;
                }
            }
        }
        if (count == 2)
        {
            cout << k - p;
        }
        if (count == 1)
        {
            cout << "0";
        }
        cout << endl;
    }

    return 0;
}