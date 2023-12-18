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

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef unordered_map<ll, ll> unmap;
typedef vector<vector<ll>> vll;

#define rep(i, a, b) for (ll i = a; i < (b); i++)
#define repdec(i, a, b) for (ll i = (a)-1; i >= b; i--)
#define trav(a, x) for (auto &a : x)
#define sp " "
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define pf push_front
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
void merge(std::vector<std::pair<int, int>> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<std::pair<int, int>> leftArr(n1);
    std::vector<std::pair<int, int>> rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (leftArr[i].first <= rightArr[j].first)
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<std::pair<int, int>> &arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}
void calculations(vector<pair<int, int>> &vec, int &k, int &n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[vec[i].second] = k;
        k--;
    }

    for (int i = 0; i < n; i++)
        cout << mp[i] << " ";
    cout << endl;
}
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {

        int n = ri();
        int k = n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            a[i] = ri();
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        vector<pair<int, int>> vec;
        for (int i = 0; i < n; i++)
            vec.push_back(make_pair(a[i], i));
        mergeSort(vec, 0, vec.size() - 1);
        calculations(vec, k, n);
    }
    return 0;
}