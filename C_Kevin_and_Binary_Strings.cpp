#include <bits/stdc++.h>
using namespace std;

int computeXOR(const string &a, const string &b) {
    int len = min(a.size(), b.size());
    int xorValue = 0, current = 0;
    for (int i = 0; i < len; i++) {
        current = (a[a.size() - 1 - i] ^ b[b.size() - 1 - i]) -
                  '0'; // XOR from the end
        xorValue = (xorValue << 1) | current;
    }
    return xorValue;
}

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    vector<pair<int, int>> substrIndices;
    vector<string> substrings;

    // Generate all substrings and store them
    for (int i = 0; i < n; i++) {
        string sub;
        for (int j = i; j < n; j++) {
            sub.push_back(s[j]);
            substrings.push_back(sub);
            substrIndices.push_back({i, j});
        }
    }

    int maxXOR = 0;
    pair<int, int> maxIndices;

    // Compare each substring's XOR with the original string
    for (int i = 0; i < substrings.size(); i++) {
        int currentXOR = computeXOR(substrings[i], s);
        if (currentXOR > maxXOR) {
            maxXOR = currentXOR;
            maxIndices = substrIndices[i];
        }
    }

    cout << 1 << " " << n << " " << maxIndices.first + 1 << " "
         << maxIndices.second + 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
