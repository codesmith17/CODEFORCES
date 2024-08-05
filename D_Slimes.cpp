#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<long long int> newOne(n, 0);
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
            {
                newOne[i] = 1;
            }
        }

        for (int i = 1; i < n; i++)
        {
            newOne[i] += newOne[i - 1];
        }

        vector<long long int> values(n);
        values[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            values[i] = values[i - 1] + arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            long long int l = 1, r = n - 1 - i;
            long long int result = 1e17;
            while (l <= r)
            {
                long long int m = (l + (r - l) / 2);
                long long int s = i + 1;
                long long int e = s + m - 1;
                long long int sum = values[e];
                if (s > 0)
                {
                    sum -= values[s - 1];
                }

                if ((newOne[e] - (s > 0 ? newOne[s - 1] : 0) == 0 and arr[s] <= arr[i]) or sum <= arr[i])
                {
                    l = m + 1;
                }
                else
                {
                    result = min(result, (e - s + 1));
                    r = m - 1;
                }
            }

            long long int ans1 = result;
            l = 1;
            r = i;
            result = 1e17;
            while (l <= r)
            {
                long long int m = (l + (r - l) / 2);
                long long int e = i - 1;
                long long int s = e - m + 1;
                long long int sum = values[e] - (s > 0 ? values[s - 1] : 0);

                if ((newOne[e] - (s > 0 ? newOne[s - 1] : 0) == 0 and arr[s] <= arr[i]))
                {
                    l = m + 1;
                }
                else if (sum <= arr[i])
                {
                    l = m + 1;
                }
                else
                {
                    result = min(result, (e - s + 1));
                    r = m - 1;
                }
            }

            result = min(result, ans1);
            if (result == 1e17)
            {
                cout << -1 << " ";
            }
            else
            {
                cout << result << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
