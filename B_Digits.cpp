#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, d;
        cin >> n >> d;

        set<int> res;

        res.insert(1);

        if (d == 5 or d == 0) {
            res.insert(5);
        }
        if (d % 3 == 0 or n >= 3) {
            res.insert(3);
        }
        if ((n == 2 and d == 7) or n >= 3) {
            res.insert(7);
        }
        if (n >= 6) {
            res.insert(9);
        } else {
            long long cnt = 1;
            for (int i = 2; i <= n; i++) {
                cnt = cnt * i;
                if (i == n) {
                    if ((cnt * d) % 9 == 0) {
                        res.insert(9);
                    }
                }
            }
        }

        for (auto &it : res) {
            cout << it << " ";
        }
        cout << "\n";
    }

    return 0;
}
