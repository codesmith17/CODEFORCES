#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c; // Corrected the input line

        // Calculating the maximum number of monkeys that can be seated
        int row1 = min(m, a); // Monkeys that want to sit in row 1
        int row2 = min(m, b); // Monkeys that want to sit in row 2

        // Remaining seats in both rows
        int remaining_seats_row1 = m - row1;
        int remaining_seats_row2 = m - row2;

        // Monkeys with no preference can sit in remaining seats
        int remaining_monkeys = c;

        // Try to fill remaining seats in row 1 and row 2 with monkeys that have
        // no preference
        int can_seat_in_row1 = min(remaining_seats_row1, remaining_monkeys);
        remaining_monkeys -= can_seat_in_row1;

        int can_seat_in_row2 = min(remaining_seats_row2, remaining_monkeys);
        remaining_monkeys -= can_seat_in_row2;

        // Total number of seated monkeys
        int total_seated = row1 + row2 + can_seat_in_row1 + can_seat_in_row2;

        // Output the result
        cout << total_seated << "\n";
    }
    return 0;
}
