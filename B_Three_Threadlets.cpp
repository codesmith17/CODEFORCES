#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ri()
{
    int n;
    cin >> n;
    return n;
}

int main()
{
    int t = ri();
    while (t--)
    {
        vector<int> v(3);
        cin >> v.front() >> v[v.begin() + 1 - v.begin()] >> v.back();

        sort(v.begin(), v.end());

        if (v.front() == v[v.begin() + 1 - v.begin()])
        {

            bool flag = false;
            for (int i = 0; i <= 3; i++)
            {
                if (v.front() * (i + 1) == v.back())
                {
                    flag = true;
                    break;
                }
            }

            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            continue;
        }
        else if (v.front() * 2 == v[v.begin() + 1 - v.begin()])
        {

            bool flag = false;
            for (int i = 0; i <= 2; i++)
            {
                if (v.front() * i + v.front() == v.back())
                {
                    flag = true;
                    break;
                }
            }

            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}
