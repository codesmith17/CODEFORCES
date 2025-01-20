#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      mp[a]++;
    }
    int cnt = 0;
    for (auto &it : mp)
      cnt += (it.second / 2);

    cout << cnt << endl;
  }
}