
#include <bits/stdc++.h>
using namespace std;
int countDistinct(vector<int> &arr, int n)
{

    sort(arr.begin(), arr.end());

    int res = 0;
    for (int i = 0; i < n; i++)
    {

        while (i < n - 1 && arr[i] == arr[i + 1])
            i++;

        res++;
    }

    return res;
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> k = {1};
        int now = 1;
        // for (int i = 0; i < n; i++)
        // {
        //     if (s[i] == '<')
        //         k.push_back(++now);
        //     else
        //         k.push_back(--now);
        // }
        // set<int> uniqueNumbers(k.begin(), k.end());
        // int count = uniqueNumbers.size();
        int z = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int j = i;
            while (j < s.length() - 1 && s[j] == s[j + 1])
            {
                j++;
            }
            z = max(j - i, z);
        }

        cout << 2 + z << endl;
    }
    return 0;
}