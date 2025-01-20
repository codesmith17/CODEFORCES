#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<bool>> escape(n, vector<bool>(m, false));
        vector<string> vec(n);

        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
        }

        queue<pair<int, int>> q;

        for (int i = 0; i < n; ++i) {
            if (vec[i][0] == 'L') {
                escape[i][0] = true;
                q.push({i, 0});
            }
            if (vec[i][m - 1] == 'R') {
                escape[i][m - 1] = true;
                q.push({i, m - 1});
            }
        }
        for (int i = 0; i < m; ++i) {
            if (vec[0][i] == 'U') {
                escape[0][i] = true;
                q.push({0, i});
            }
            if (vec[n - 1][i] == 'D') {
                escape[n - 1][i] = true;
                q.push({n - 1, i});
            }
        }

        while (q.size()) {
            pair<int, int> qTop = q.front();
            q.pop();
            int x = qTop.first, y = qTop.second;
            if (x > 0 and !escape[x - 1][y] and vec[x - 1][y] == 'D') {
                escape[x - 1][y] = true;
                q.push({x - 1, y});
            }
            if (x < n - 1 and !escape[x + 1][y] and vec[x + 1][y] == 'U') {
                escape[x + 1][y] = true;
                q.push({x + 1, y});
            }
            if (y > 0 and !escape[x][y - 1] and vec[x][y - 1] == 'R') {
                escape[x][y - 1] = true;
                q.push({x, y - 1});
            }
            if (y < m - 1 and !escape[x][y + 1] and vec[x][y + 1] == 'L') {
                escape[x][y + 1] = true;
                q.push({x, y + 1});
            }
        }
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!escape[i][j] and vec[i][j] != '?') {
                    ans++;
                } else if (!escape[i][j]) {
                    bool flag = true;
                    if (i > 0 and !escape[i - 1][j])
                        flag = false;
                    if (j > 0 and !escape[i][j - 1])
                        flag = false;
                    if (i < n - 1 and !escape[i + 1][j])
                        flag = false;
                    if (j < m - 1 and !escape[i][j + 1])
                        flag = false;
                    if (!flag)
                        ans++;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
