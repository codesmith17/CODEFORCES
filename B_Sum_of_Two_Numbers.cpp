#include <bits/stdc++.h>
using namespace std;
int countDigit(long long n)
{
    return floor(log10(n) + 1);
}
int getSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int size = countDigit(n);

        if (n == 1)
        {
            cout << "1 0" << endl;
            continue;
        }
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << endl;
        }
        else
        {
            if (((n / 2) % 10 == 0 || (n / 2 + 1) % 10 == 0) && n % 10 == 9 && ((n / 10) % 10) % 2 == 1)
            {
                int f = n / 2;
                int s = f + 1;
                while (1)
                {
                    if (abs(getSum(f) - getSum(s)) <= 1)
                    {
                        cout << f << " " << s << endl;
                        break;
                    }
                    else
                    {
                        f--;
                        s++;
                    }
                }
            }
            else
                cout << n / 2 << " " << n / 2 + 1 << endl;
        }
    }

    return 0;
}