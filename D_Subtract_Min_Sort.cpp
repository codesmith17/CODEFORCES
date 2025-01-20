#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n, -1);
        for (int &it : arr)
            cin >> it;
        for (int i = 0; i < n - 1; i++) {
            int mini = min(arr[i], arr[i + 1]);
            arr[i] -= mini;
            arr[i + 1] -= mini;
        }
        if (is_sorted(arr.begin(), arr.end())) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }
    }
}