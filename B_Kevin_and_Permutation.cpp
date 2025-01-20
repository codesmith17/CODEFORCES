#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k == 1) {
            for (int i = 0; i < n; i++) {
                cout << i + 1 << " ";
            }

        } else {
            int cnt = 1;
            vector<int> res(n, 0);
            for (int i = k - 1; i < n; i += k) {
                res[i] = cnt++;
            }
            for (int i = 0; i < n; i++) {
                if (res[i] = 0)
                    res[i] = cnt++;
            }
            for (int i = 0; i < n; i++)
                cout << res[i] << " ";
        }
        cout << "\n";
    }
}