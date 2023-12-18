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
int32_t main(int argc, char *argv[])
{
  int t = ri();
  while (t--)
  {

    int n = ri(), k = ri();
    vector<int> arr, brr;
    for (int i = 0; i < n; i++)
    {
      int x = ri();
      arr.push_back(x);
      brr.push_back(x);
    }

    sort(brr.begin(), brr.end());
    int breaking_point;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
      if (i != brr[i])
      {
        breaking_point = i;
        flag = true;
        break;
      }
    }
    if (flag == false)
      breaking_point = n;
    arr.push_back(breaking_point);
  
    n++;
    k %= (n);
    for (int i = 0; i < n - 1; i++)
    {
      cout << arr[(i - k + n) % (n)] << " ";
    }
    cout << endl;
  }
  return 0;
}