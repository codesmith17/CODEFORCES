#include <bits/stdc++.h>
using namespace std;
int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (r1 >= l2) {
        cout << min(r1, l2) << " " << max(r1, l2) << endl;
    } else {
        cout << -1 << endl;
    }
}
