#include <bits/stdc++.h>
using namespace std;

int recursion(int i, int j, string &a, string &b, string &c,
          vector<vector<int>> &dp) {
    if (i == a.size() and j == b.size())
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int pos = i + j;

    if (pos >= c.size())
        return 1e9;

    int res = 1e9;

    if (i < a.size()) {
        int cost = (a[i] == c[pos]) ? 0 : 1;
        res = min(res, cost + recursion(i + 1, j, a, b, c, dp));
    }

    if (j < b.size()) {
        int cost = (b[j] == c[pos]) ? 0 : 1;
        res = min(res, cost + recursion(i, j + 1, a, b, c, dp));
    }

    return dp[i][j] = res;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        string a, b, c;
        cin >> a >> b >> c;

        int n = a.size();
        int m = b.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

        int result = recursion(0, 0, a, b, c, dp);

        cout << result << endl;
    }
}
