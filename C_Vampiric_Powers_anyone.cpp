#include <iostream>
#include <map>
/*(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧*/
#include <algorithm>
#include <numeric>
#include <set>
#include <cmath>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;
#define pb push_back
string rs()
{
    string a;
    cin >> a;
    return a;
}
int ri()
{
    int a;
    cin >> a;
    return a;
}
long long rll()
{
    long long a;
    cin >> a;
    return a;
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

int XORING(int arr[], int n)
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
int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = ri();
    while (t--)
    {
        int n = ri();
        int a[n];
        for (int i = 0; i < n; i++)
            a[i] = ri();
        cout << XORING(a, n) << endl;
    }
    return 0;
    return 0;
}