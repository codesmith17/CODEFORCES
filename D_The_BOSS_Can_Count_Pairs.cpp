#include <iostream>
#include <unordered_map>
using namespace std;

const int MOD = 1000000007;
typedef long long ll;

ll power(ll x, ll y)
{
    ll res = 1;
    x = x % MOD;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % MOD;

        y = y >> 1;
        x = (x * x) % MOD;
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n], brr[n];
        unordered_map<ll, ll> freq;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> brr[i];
        }

        int count = 0;

        for (ll i = 0; i < n; i++)
        {
            ll target = brr[i] - arr[i];

            if (freq.find(target) != freq.end())
            {
                count += freq[target];
            }

            if (target == arr[i])
            {
                count--;
            }
        }

        ll result = power(2, count);
        cout << result << endl;
    }

    return 0;
}
