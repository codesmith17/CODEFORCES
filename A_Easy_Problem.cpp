#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            int a = i;
            int b = n - i;
            if (a > 0 and b > 0)
                cnt++;
        }
        cout << cnt << endl;
    }
}