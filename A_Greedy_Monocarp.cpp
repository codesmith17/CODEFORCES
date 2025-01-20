#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.rbegin(), arr.rend());
        int changes = 0;
        int sum = 0;
        int i = 0;
        if (arr[0] >= k) {
            cout << 0 << endl;
            continue;
        }
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] + sum <= k)
                sum += arr[i];
            else {
                flag = true;
                cout << k - sum << endl;
                break;
            }
        }
        if (!flag) {
            cout << k - sum << endl;
        }
    }
}