#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int sum = 0;
        int st = 1, e = n, res = -1;
        vector<int> prefix;
        for (int i = n - 1; i >= 0; i--) {
            prefix.push_back(sum);

            if (s[i] == '1')
                sum++;
            else
                sum--;
        }

        sort(prefix.rbegin(), prefix.rend());

        st++;
        while (st <= e) {
            // st++;
            int mid = st + (e - st) / 2;
            int sum = 0;

            for (int i = 0; i < mid - 1; i++) {
                if (i >= n)
                    break;
                sum += prefix[i];
            }

            if (sum >= k) {
                res = mid;
                e = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
