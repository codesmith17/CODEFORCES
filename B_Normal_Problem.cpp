#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        for (char &ch : a) {
            if (ch == 'p')
                ch = 'q';
            else if (ch == 'q')
                ch = 'p';
        }
        reverse(a.begin(), a.end());
        cout << a << "\n";
    }
}