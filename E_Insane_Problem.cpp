#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdint>

using namespace std;
using ll = long long;

void solve() {
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    
    ll count = 0;

    // Iterate through possible values of n
    for (ll n = 0; ; n++) {
        // Calculate the minimum and maximum possible x
        ll kn = pow(k, n);
        
        // Stop if kn becomes too large
        if (kn > r2) break;

        // Find the range of valid x values
        ll minX = max(l1, (kn + r2 - 1) / r2);
        ll maxX = min(r1, kn / l2);

        // If valid x range exists, add to count
        if (minX <= maxX) {
            count += maxX - minX + 1;
        }
    }
    
    cout << count << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}