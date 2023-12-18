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
template <typename ForwardIterator>
bool sorting(ForwardIterator first, ForwardIterator last)
{
    if (first == last || std::next(first) == last)
    {

        return true;
    }

    ForwardIterator next = first;
    ++next;
    while (next != last)
    {
        if (*next < *first)
        {
            return false;
        }
        ++first;
        ++next;
    }

    return true;
}
void mergeSort(vector<int> &left, vector<int> &right, vector<int> &bars)
{
    int nL = left.size();
    int nR = right.size();
    int i = 0, j = 0, k = 0;

    while (j < nL && k < nR)
    {
        if (left[j] < right[k])
        {
            bars[i] = left[j];
            j++;
        }
        else
        {
            bars[i] = right[k];
            k++;
        }
        i++;
    }
    while (j < nL)
    {
        bars[i] = left[j];
        j++;
        i++;
    }
    while (k < nR)
    {
        bars[i] = right[k];
        k++;
        i++;
    }
}
void sort(vector<int> &bar)
{
    if (bar.size() <= 1)
        return;

    int mid = bar.size() / 2;
    vector<int> left;
    vector<int> right;

    for (size_t j = 0; j < mid; j++)
        left.push_back(bar[j]);
    for (size_t j = 0; j < (bar.size()) - mid; j++)
        right.push_back(bar[mid + j]);

    sort(left);
    sort(right);
    mergeSort(left, right, bar);
}

int32_t main(int argc, char *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        vector<int> even, odd;
        vector<int> epos, opos;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] & 1)
            {
                odd.push_back(v[i]);
                opos.push_back(i);
            }
            else
            {
                even.push_back(v[i]);
                epos.push_back(i);
            }
        }

        sort(odd);
        sort(even);

        vector<int> k(n);
        int e = 0, o = 0;
        for (int i = 0; i < opos.size(); i++)
        {
            k[opos[i]] = odd[o];
            o++;
        }

        for (int i = 0; i < epos.size(); i++)
        {
            k[epos[i]] = even[e];
            e++;
        }

        if (sorting(k.begin(), k.end()) == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}