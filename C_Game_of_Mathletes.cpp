#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n & 1) {
            cout << 0 << "\n";
            continue;
        }
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        int cnt = 0;
        for (auto &[num, count] : mp) {
            int comp = k - num;
            if (mp.find(comp) != mp.end() and comp != num) {
                int pairs = min(count, mp[comp]);
                cnt += pairs;
                mp[num] -= pairs;
                mp[comp] -= pairs;
            } else if (comp == num) {
                int pairs = count / 2;
                score += pairs;
                mp[num] -= pairs * 2;
            }
        }
        cout << cmt << "\n";
    }
}