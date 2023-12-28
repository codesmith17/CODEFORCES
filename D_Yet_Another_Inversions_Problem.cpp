#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 998244353

long long merge_and_count(std::vector<long long> &arr, long long left, long long mid, long long right)
{
    long long i, j, k;
    long long count = 0;

    i = left;
    j = mid;
    k = 0;

    while (i < mid && j < right)
    {
        if (arr[i] <= arr[j])
        {
            i++;
        }
        else
        {
            count += mid - i;
            j++;
        }
    }

    std::vector<long long> sorted_arr(right - left);
    i = left;
    j = mid;
    k = 0;

    while (i < mid && j < right)
    {
        if (arr[i] <= arr[j])
        {
            sorted_arr[k++] = arr[i++];
        }
        else
        {
            sorted_arr[k++] = arr[j++];
        }
    }

    while (i < mid)
    {
        sorted_arr[k++] = arr[i++];
    }

    while (j < right)
    {
        sorted_arr[k++] = arr[j++];
    }

    for (i = left; i < right; ++i)
    {
        arr[i] = sorted_arr[i - left];
    }

    return count;
}

long long merge_sort_and_count(std::vector<long long> &arr, long long left, long long right)
{
    long long count = 0;

    if (right - left > 1)
    {
        long long mid = (left + right) / 2;
        count += merge_sort_and_count(arr, left, mid);
        count += merge_sort_and_count(arr, mid, right);
        count += merge_and_count(arr, left, mid, right);
    }

    return count;
}

long long count_inversions(long long n, long long k, std::vector<long long> &p, std::vector<long long> &q)
{
    std::vector<long long> arr(n * k);

    for (long long i = 0; i < n; ++i)
    {
        for (long long j = 0; j < k; ++j)
        {
            arr[i * k + j] = p[i] * (1 << q[j]);
        }
    }

    long long result = merge_sort_and_count(arr, 0, n * k);

    return result % MOD;
}

int main()
{
    long long t;
    std::cin >> t;

    while (t--)
    {
        long long n, k;
        std::cin >> n >> k;

        std::vector<long long> p(n);
        std::vector<long long> q(k);

        for (long long i = 0; i < n; ++i)
        {
            std::cin >> p[i];
        }

        for (long long i = 0; i < k; ++i)
        {
            std::cin >> q[i];
        }

        long long result = count_inversions(n, k, p, q);
        std::cout << result << std::endl;
    }

    return 0;
}
