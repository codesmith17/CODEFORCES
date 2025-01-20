#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        long long sum = 0;
        int c2 = 0, c3 = 0;
        for (char d : n) {
            int x = d - '0';
            sum += x;
            if (x == 2)
                c2++;
            if (x == 3)
                c3++;
        }
        long long target = (9 - (sum % 9)) % 9;
        bool found = false;

        for (int b = 0; b <= c3; b++) {
            long long rem = (target - b * 9) % 9;
            if (rem < 0)
                rem += 9;
            for (long long a = 0; a < 9; a++) {
                if ((2 * a) % 9 == rem && a <= c2) {
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }
        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
