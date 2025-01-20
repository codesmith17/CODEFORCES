#include <bits/stdc++.h>
using namespace std;
unordered_map<long long, long long> dp;

long long maxCoins(long long x) {

    if (x <= 3)
        return 1;

    if (dp.find(x) != dp.end())
        return dp[x];

    long long result = 2 * maxCoins(x / 4);

    dp[x] = result;

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long cnt = 1;
        cout << maxCoins(n) << "\n";
    }
}
