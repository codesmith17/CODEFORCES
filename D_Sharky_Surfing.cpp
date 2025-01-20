#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main();
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, l;
    cin >> n >> m >> l;
    vector<pair<int, int>> hurdles;
    for (int i = 0; i < n; i++)
    {
      int a, b;
      cin >> a >> b;
      hurdles.push_back(make_pair(a, b));
    }
    vector<pair<int, int>> powerUps;
    for (int i = 0; i < m; i++)
    {
      int a, b;
      cin >> a >> b;
      powerUps.push_back(make_pair(a, b));
    }
    sort(powerUps.begin(), powerUps.end(), [](pair<int, int> &a, pair<int, int> &b)
         {
    if (a.second == b.second)
        return a.first < b.first;  
    return a.second > b.second; });
    int jumpPower = 1;
    for (int i = 0; i < n; i++)
    {
      int s = 0, e = m - 1;
      int res = -1;
      while (s <= e)
      {
        int mid = s + (e - s) >> 1;
        if (powerUps[mid].first <= hurdles[i].first)
        {
          res = mid;
          s = mid + 1;
        }
        else
        {
          e = mid - 1;
        }
      }
      cout<<res<<endl;
    }
  }
}