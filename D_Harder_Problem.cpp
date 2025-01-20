#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), f(n + 2, 0), b(n, 0);
        for (auto &x : a)
            cin >> x;

        int max_f = 0, nxt = 1;
        for (int i = 0; i < n; i++) {
            int need = a[i];
            if (i == 0 || (f[need] < max_f) || (max_f == 0)) {
                b[i] = need;
                max_f = max(max_f, ++f[need]);
            } else {
                while (nxt <= n and (f[nxt] != 0 || nxt == need))
                    nxt++;
                if (nxt <= n && f[nxt] < max_f)
                    b[i] = nxt, f[nxt]++;
                else
                    b[i] = need, max_f = max(max_f, ++f[need]);
            }
        }
        for (int i = 0; i < n; i++)
            cout << b[i] << (i < n - 1 ? ' ' : '\n');
    }
    return 0;
}
