#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double sum = 0;
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        double avg = sum / n;
        if (ceil(avg) != floor(avg)) {
            cout << "NO" << endl;
            continue;
        }
        int avgInt = (int)avg; 

        for (int i = 1; i < n - 1; i++) {
            int diff = avgInt - arr[i - 1];
            arr[i - 1] += diff;
            arr[i + 1] -= diff;
        }

        unordered_set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(arr[i]);
        }

        cout << (st.size() == 1 ? "YES" : "NO") << endl;
    }
}
