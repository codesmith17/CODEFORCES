#include <iostream>
#include <map>
/*(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧*/
#include <algorithm>
#include <numeric>
#include <set>
#include <cmath>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;
// bool isPrime(int n)
// {
//     // Base cases
//     if (n <= 1 || n % 2 == 0)
//         return false;
//     if (n == 2)
//         return true;

//     // Generating and storing factors
//     // of n-1
//     vector<int> factors;
//     primeFactors(n - 1, factors);

//     // Array for random generator. This array
//     // is to ensure one number is generated
//     // only once
//     int random[n - 3];
//     for (int i = 0; i < n - 2; i++)
//         random[i] = i + 2;

//     // shuffle random array to produce randomness
//     shuffle(random, random + n - 3,
//             default_random_engine(time(0)));

//     // Now one by one perform Lucas Primality
//     // Test on random numbers generated.
//     for (int i = 0; i < n - 2; i++)
//     {
//         int a = random[i];
//         if (power(a, n - 1, n) != 1)
//             return false;

//         // this is to check if every factor
//         // of n-1 satisfy the condition
//         bool flag = true;
//         for (int k = 0; k < factors.size(); k++)
//         {
//             // if a^((n-1)/q) equal 1
//             if (power(a, (n - 1) / factors[k], n) == 1)
//             {
//                 flag = false;
//                 break;
//             }
//         }

//         // if all condition satisfy
//         if (flag)
//             return true;
//     }
//     return false;
// }
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
        string a, b;
        cin >> a >> b;

        int arr[2] = {0};
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                arr[0]++;
        }

        for (int i = 0; i < n / 2; i++)
            swap(b[i], b[n - i - 1]);

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                arr[1]++;
        }

        for (int i = 0; i < n / 2; i++)
            swap(b[i], b[n - i - 1]);
        int x = arr[0] & 1, y = arr[1] & 1;
        if (y == 1)
            y = 0;
        else
            y = 1;

        if (arr[0] < 1)
            cout << 0 << endl;
        else if (arr[1] < 1)
            cout << 2 << endl;
        else
        {
            if (2 * arr[0] - x < 2 * arr[1] - y)
                cout << 2 * arr[0] - x << endl;
            else
                cout << 2 * arr[1] - y << endl;
        }
    }
    return 0;
}