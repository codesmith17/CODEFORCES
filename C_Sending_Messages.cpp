#include <iostream>
#include <map>
#include <algorithm>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
#include <cstdint>
#include <math.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef unordered_map<ll, ll> unmap;
typedef vector<vector<ll>> vll;

#define rep(i, a, b) for (ll i = a; i < (b); i++)
#define repdec(i, a, b) for (ll i = (a)-1; i >= b; i--)
#define trav(a, x) for (auto &a : x)
#define sp " "
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define pf push_front
int ri()
{
    int n;
    cin >> n;
    return n;
}
long long int rl()
{
    long long int n;
    cin >> n;
    return n;
}
string rs()
{
    string n;
    cin >> n;
    return n;
}
#define int long long
int32_t main(int argc, char *argv[])
{
    int test_cases;
    std::cin >> test_cases;

    while (test_cases--)
    {
        int num_stations, fuel_capacity, cost_a, cost_b;
        std::cin >> num_stations >> fuel_capacity >> cost_a >> cost_b;

        std::vector<int> distances(num_stations, 0);
        for (int i = 0; i < num_stations; i++)
        {
            std::cin >> distances[i];
        }

        int success_flag = 1;
        int prev_distance = 0;

        for (int i = 0; i < num_stations; i++)
        {
            int distance_to_travel = distances[i] - prev_distance;
            int fuel_needed = distance_to_travel * cost_a;
            fuel_needed = std::min(fuel_needed, cost_b);

            if (fuel_capacity <= fuel_needed)
            {
                success_flag = 0;
                break;
            }
            else
            {
                fuel_capacity -= fuel_needed;
            }

            prev_distance = distances[i];
        }

        if (success_flag)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
}