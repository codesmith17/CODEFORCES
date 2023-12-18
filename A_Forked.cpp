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
bool can_attack(int x, int y, int target_x, int target_y, const vector<pair<int, int>> &knight_moves)
{
    for (auto &move : knight_moves)
    {
        if (x + move.first == target_x && y + move.second == target_y)
            return true;
    }
    return false;
}
int32_t main(int argc, char *argv[])
{
    int t = ri();

    while (t--)
    {
        int a = ri(), b = ri(), xK = ri(), yK = ri(), xQ = ri(), yQ = ri();

        vector<pair<int, int>> knight_moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

        set<pair<int, int>> pairs;
        int knight_x;
        int knight_y;
        for (auto &move : knight_moves)
        {
            for (int i = -1; i <= 1; i++)
            {
                for (int j = -1; j <= 1; j++)
                {
                    knight_x = xK + a * i;
                    knight_y = yK + b * j;
                }
            }

            if (can_attack(knight_x, knight_y, xQ, yQ, knight_moves))
            {
                pairs.insert({knight_x, knight_y});
            }

            knight_x = xQ + move.first;
            knight_y = yQ + move.second;
            if (can_attack(knight_x, knight_y, xK, yK, knight_moves))
            {
                pairs.insert({knight_x, knight_y});
            }
        }

        cout << pairs.size() << endl;
    }
    return 0;
}