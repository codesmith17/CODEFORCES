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
int ri()
{
    int n;
    cin >> n;
    return n;
}
long long int rl()
{
    long long int n;
    cin >> n;
    return n;
}
string rs()
{
    string n;
    cin >> n;
    return n;
}

int32_t main(int argc, char *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        // set<long long int> s;
        // for (int i = 1; i <= sqrt(n); i++)
        // {
        //     if (n % i == 0)
        //     {

        //         if (n / i == i)

        //             s.push_back(i);

        //         else
        //         {

        //             s.push_back(i);

        //             s.push_back(n / i);
        //         }
        //     }
        // }

        // int count = 0;
        // set<long long int>::iterator itr = s.begin();
        // set<long long int>::iterator prev = s.begin();
        // set<long long int>::iterator curr;
        // itr++;
        // for (;
        //      itr != s.end(); itr++)
        // {
        //     curr = itr;
        //     if (*prev - *curr == 1)
        //         count++;
        //     else
        //         count = 0;
        // }
        // cout << count << endl;
        long long int x = 1;
        while (n % x == 0)
            x++;
        cout << x - 1 << endl;
    }
    return 0;
}