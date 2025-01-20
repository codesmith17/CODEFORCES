#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int &it : arr)
            cin >> it;

        unordered_map<int, int> mp;
        for (int &it : arr) {
            mp[it]++;
        }
        using pii = pair<int, int>;
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        for (auto &it : mp) {
            pq.push({it.second, it.first});
        }

        unordered_map<int, int> alice, bob;
        int ind = 0;

        while (pq.size()) {
            auto [times, val] = pq.top();
            pq.pop();x

            if ((ind ^ 1) == (ind + 1)) {
                alice[val]++;
            } else {
                bob[val]++;
            }

            if (times - 1 > 0) {
                pq.push({times - 1, val});
            }

            ind++;
        }

        int res = 0;
        for (auto &it : alice) {
            if (it.second == mp[it.first]) {
                res++;
            }
        }
        res += alice.size();

        cout << res << endl;
    }
    return 0;
}
