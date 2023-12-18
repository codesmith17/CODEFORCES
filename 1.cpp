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

struct TrieNode
{
  int value;
  TrieNode *arr[2];
  TrieNode()
  {
    value = 0;
    arr[0] = nullptr;
    arr[1] = nullptr;
  }
};

TrieNode *newNode()
{
  TrieNode *temp = new TrieNode;
  temp->value = 0;
  temp->arr[0] = temp->arr[1] = NULL;
  return temp;
}
TrieNode *root;
void insert(int pre_xor)
{
  TrieNode *temp = root;

  for (int i = 31; i >= 0; i--)
  {

    int val;
    if ((pre_xor & (1 << i)) >= 1)
      val = 1;
    else
      val = 0;

    if (temp->arr[val] == nullptr)
      temp->arr[val] = new TrieNode();

    temp = temp->arr[val];
  }

  temp->value = pre_xor;
}

int query(int pre_xor)
{
  TrieNode *temp = root;
  for (int i = 31; i >= 0; i--)
  {

    int val = (pre_xor & (1 << i)) >= 1 ? 1 : 0;

    if (temp->arr[1 - val] != nullptr)
      temp = temp->arr[1 - val];

    else if (temp->arr[val] != nullptr)
      temp = temp->arr[val];
  }
  return pre_xor ^ (temp->value);
}

int maxSubarrayXOR(int arr[], int n)
{

  root = new TrieNode();
  insert(0);

  int result = INT_MIN;
  int pre_xor = 0;

  for (int i = 0; i < n; i++)
  {

    pre_xor = pre_xor ^ arr[i];
    insert(pre_xor);

    result = max(result, query(pre_xor));
  }
  return result;
}

int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int a[n];
    int x = 0;
    vi p(n, 0);
    rep(i, 0, n)
    {
      cin >> a[i];
      x = x ^ a[i];
      p[i] = x;
    }
    cout << maxSubarrayXOR(a, n);
    cout << nl;
  }
}