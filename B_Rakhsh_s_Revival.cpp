#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        int res = 0, i = 0;
        while (i < n) {
            int zeros = 0;
            while (i < n and s[i] == '0') {
                zeros++;
                i++;
                if (zeros == m) {
                    res++;
                    i += k - 1;
                    break;
                }
            }

            if (zeros < m)
                i++;
        }
        cout << res << "\n";
    }
}