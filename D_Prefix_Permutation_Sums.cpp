#include <iostream>
#include <map>
#include <algorithm>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
#include <cstdint>
#include <math.h>
using namespace std;

int32_t main(int argc, char *argv[])
{
    long long int t = 1;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> arr;
        set<long long int> st;
        st.insert(n);
        for (long long int i = 0; i < n - 1; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
            st.insert(i + 1);
        }
        long long int x = 1;
        long long int prev = -1;
        if (st.find(arr[0]) != st.end())
        {
            st.erase(st.find(arr[0]));
        }
        else
        {
            if (prev == -1)
                prev = arr[0];
            else
                x = 0;
        }
        for (long long int i = 1; i < n - 1; i++)
        {
            long long int diff = arr[i] - arr[i - 1];
            if (st.find(diff) != st.end())
            {
                st.erase(st.find(diff));
            }
            else
            {
                if (prev == -1)
                    prev = diff;
                else
                {
                    x = 0;
                    break;
                }
            }
        }
        if (x == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            long long int sum = 0;
            set<long long int>::iterator itr;

            
            for (itr = st.begin();
                 itr != st.end(); itr++)
                sum += *itr;
            if (prev == -1)
            {
                long long int gogogovinda = n * (n + 1) / 2;
                if (gogogovinda - arr[n - 2] == sum)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                if (sum == prev)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
}