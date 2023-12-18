#include <bits/stdc++.h>
using namespace std;
#define nl endl

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef unordered_map<ll, ll> unmap;
typedef vector<vector<ll>> vll;

template <class T>
using pq = priority_queue<T>;

#define rep(i, a, b) for (ll i = a; i < (b); i++)
#define repdec(i, a, b) for (ll i = (a)-1; i >= b; i--)
#define trav(a, x) for (auto &a : x)
#define sp " "
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define pf push_front
#define f first
#define s second
int modularExponentiation(int x, int n, int m)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            res = (1LL * res * x) % m;
        x = (1LL * x * x) % m;
        n /= 2;
    }
    return res;
}
int get_hash(string s, const int n)
{
    long long p = 31, m = 1e9 + 7;
    long long hash = 0;
    long long p_pow = 1;
    for (int i = 0; i < n; i++)
    {
        hash = (hash + (s[i] - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash;
}
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
int ri(int n)
{
    cin >> n;
    return n;
}
long long int ri(long long int n)
{
    cin >> n;
    return n;
}
string ri(string n)
{
    cin >> n;
    return n;
}
using namespace std;
struct Hash
{
    const long long int p1 = 31, m1 = 1e9 + 7;
    const long long int p2 = 37, m2 = 1e9 + 9;
    long long int hash1 = 0, hash2 = 0;
    Hash(const string &s)
    {
        compute_hash1(s);
        compute_hash2(s);
    }

    void compute_hash1(const string &s)
    {
        long long p_pow = 1;
        for (char ch : s)
        {
            hash1 = (hash1 + (ch + 1 - 'a') * p_pow) % m1;
            p_pow = (p_pow * p1) % m1;
        }
    }

    void compute_hash2(const string &s)
    {
        long p_pow = 1;
        for (char ch : s)
        {
            hash2 = (hash2 + (ch + 1 - 'a') * p_pow) % m2;
            p_pow = (p_pow * p2) % m2;
        }
    }

    // For two strings to be equal
    // they must have same hash1 and hash2
    bool operator==(const Hash &other)
    {
        return (hash1 == other.hash1 && hash2 == other.hash2);
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> pref(n + 1), suff(n + 2);
    suff[n + 1] = n + 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            pref[i + 1] = i;
        else
            pref[i + 1] = pref[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            suff[i + 1] = i;
        else
            suff[i + 1] = suff[i + 2];
    }
    set<pair<int, int>> seen;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        int x = suff[l];
        int y = pref[r];
        if (x >= y)
            x = y = 0;
        seen.insert({x, y});
    }
    // dbg(pref);
    // dbg(suff);
    cout << seen.size() << endl;
}