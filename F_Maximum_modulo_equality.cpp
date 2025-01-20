#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Prefix GCD array
        vector<int> prefixGCD(n);
        prefixGCD[0] = a[0];
        for (int i = 1; i < n; i++) {
            prefixGCD[i] = __gcd(prefixGCD[i-1], a[i]);
        }
        
        // Suffix GCD array
        vector<int> suffixGCD(n);
        suffixGCD[n-1] = a[n-1];
        for (int i = n-2; i >= 0; i--) {
            suffixGCD[i] = __gcd(suffixGCD[i+1], a[i]);
        }
        
        while (q--) {
            int l, r;
            cin >> l >> r;
            
            // Adjust to 0-based indexing
            l--; r--;
            
            int result;
            if (l == 0) {
                // If query starts from first element
                result = suffixGCD[r+1];
            } else if (r == n-1) {
                // If query ends at last element
                result = prefixGCD[l-1];
            } else {
                // Calculate GCD of prefix and suffix
                result = __gcd(prefixGCD[l-1], suffixGCD[r+1]);
            }
            
            cout << result << "\n";
        }
    }
    
    return 0;
}