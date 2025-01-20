#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        for (int i = 1; i < n; i++) {
            int ind = i;
            int old = i;
            while (s[ind] - 1 > s[ind - 1] and ind >= 1) {
                s[ind]--;
                swap(s[ind], s[ind - 1]);
                ind--;
            }
        }
        cout << s << endl;
    }
}