#include <bits/stdc++.h>
using namespace std;
bool palindrome(vector<int> &arr, int n)
{

    int flag = 0;

    for (int i = 0; i <= n / 2 && n != 0; i++)
    {

        if (arr[i] != arr[n - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        return false;
    else
        return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i <= n - k; i++)
    {
        vector<int> temp;
        for (int j = i; j <= i + k; j++)
        {
            temp.push_back(arr[j]);
        }
        bool k = palindrome(temp, temp.size());
    }

    return 0;
}
