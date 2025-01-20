#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr;
    int dimensionProduct;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      arr.push_back(a);
      mp[a]++;
    }
    dimensionProduct = n - 2;
    if (dimensionProduct == 1)
    {
      cout << "1 1" << endl;
      continue;
    }
    for (int i = 0; i < n; i++)
    {
      if (arr[i] <= dimensionProduct and dimensionProduct % arr[i] == 0)
      {
        int complement = dimensionProduct / arr[i];
        mp[arr[i]]--;
        if (mp.find(complement) != mp.end() and mp[complement] > 0)
        {
          cout << complement << " " << arr[i] << endl;
          break;
        }
        mp[arr[i]]++;
      }
    }
  }
}