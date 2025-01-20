#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> dp(101, 0);
    dp[1] = 1;
    for (int i = 2; i <= 100; i++) {
        dp[i] += 4 * dp[i - 1] + 4;
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &it : arr)
            cin >> it;
        int curr = 0;
        for (int i = 0; i < n; i++) {
            curr += arr[i];
            
        }
    }
}