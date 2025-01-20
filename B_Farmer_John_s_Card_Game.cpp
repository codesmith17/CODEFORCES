#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
            sort(arr[i].begin(), arr[i].end());
        }
        map<vector<int>, int> mp;
        int cnt = 0;
        for (vector<int> &it : arr) {
            mp[it] = cnt++;
        }
        vector<int> res;
        int ind = 0;
        for (int i = 0; i < m; i++)
            for (auto &it : mp) {
                res.push_back(it.first[i]);
            }
        if (!is_sorted(res.begin(), res.end())) {
            cout << -1 << "\n";
        } else {
            for (auto &it : mp)
                cout << (it.second + 1) << " ";
            cout << "\n";
        }
    }
}