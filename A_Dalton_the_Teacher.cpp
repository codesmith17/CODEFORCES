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
int ri(int n)
{
    cin >> n;
    return n;
}
long long int rl(long long int n)
{
    cin >> n;
    return n;
}
string rs(string n)
{
    cin >> n;
    return n;
}

int32_t main(int argc, char *argv[])
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (long long int i = 0; i < n; i++)
            cin >> arr[i];
        long long int k = 0;
        for (long long int i = 0; i < n; i++)
        {
            if (arr[i] == i + 1)
                k++;
        }
        if (k&1)
        k++;
        cout << k / 2 << endl;
    }
    return 0;
}