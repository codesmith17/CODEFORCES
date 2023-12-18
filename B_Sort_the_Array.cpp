
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
using namespace std;
int arraySortedOrNot(int arr[], int n)
{

    if (n == 1 || n == 0)
        return 1;

    if (arr[n - 1] < arr[n - 2])
        return 0;

    return arraySortedOrNot(arr, n - 1);
}
bool isDescendingOrder(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n], brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        brr[i] = arr[i];
    }
    if (arraySortedOrNot(arr, n))
    {
        cout << "NO" << endl;
    }
    else if (isDescendingOrder(arr, n))
    {
        cout << "YES" << endl;
        cout << 1 << " " << n << endl;
    }

    sort(brr, brr + n);

    return 0;
}