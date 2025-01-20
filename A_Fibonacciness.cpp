#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, d, e;
        cin >> a >> b >> d >> e;
        int pos1 = a + b;
        int cnt1 = (a + b == pos1) + (b + pos1 == d) + (pos1 + d == e);
        int pos2 = d - b;
        int cnt2 = (a + b == pos2) + (b + pos2 == d) + (pos2 + d == e);
        int pos3 = d + e;
        int cnt3 = (a + b == pos3) + (b + pos3 == d) + (pos3 + d == e);
        cout << max({cnt1, cnt2, cnt3}) << "\n";
    }
}