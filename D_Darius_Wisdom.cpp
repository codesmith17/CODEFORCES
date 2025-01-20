#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<vector<int>> res;

        int left = 0, right = n - 1, ind = 0;
        while (left < right) {

            while (right > 0 and arr[right] == 2)
                right--;
            while (left < n and arr[left] != 2)
                left++;

            if (left < right) {

                if (arr[right] == 1) {
                    while (ind < left && arr[ind] != 1)
                        ind++;

                    swap(arr[ind], arr[right]);
                    res.push_back({ind, right});

                    ind = min(ind, left);
                }
                if (arr[right] == 0 or arr[right] == 1) {
                    swap(arr[left], arr[right]);
                    res.push_back({left, right});
                }
            }
        }

        left = 0, right = n - 1, ind = n - 1;
        while (left < right) {


            while (right > 0 && arr[right] != 0)
                right--;
                
            while (left < n && arr[left] == 0)
                left++;

            if (left < right) {

                if (arr[left] == 2) {

                    while (ind > right and arr[ind] != 1)
                        ind--;

                    swap(arr[ind], arr[right]);
                    res.push_back({ind, right});

                    ind = max(ind, right);
                }
                if (arr[left] >= 1) {
                    swap(arr[left], arr[right]);
                    res.push_back({left, right});
                }
            }
        }

        cout << res.size() << endl;
        for (vector<int> &it : res) {
            cout << it[0] + 1 << " " << it[1] + 1 << "\n";
        }
    }

    return 0;
}