#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int res = 0;
        int sum = 0;
        bool flag = false;
        vector<string> vec;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            vec.push_back(s);
        }
        for (string &it : vec) {
            if (sum + it.size() <= m) {
                sum += it.size();
                res++;
            } else
                break;
        }
        cout << res << endl;
    }
}