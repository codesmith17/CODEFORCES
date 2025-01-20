#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int n=floor(log10(a)) + 1;
    while (floor(log10(a) + 1) <= n+c)
    {
        for (int i = 0; i <= 9; i++)
        {
            if ((a * 10 + i) % b == 0)
            {
                a = a * 10 + i;
            }
        }
    }
    cout << a << endl;
    return 0;
}