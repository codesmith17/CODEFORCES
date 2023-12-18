
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

    if (n == 1 || n == 0)
        return false;

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1;; i++)
    {
        if (n == 0)
            break;

        if (isPrime(i))
        {
            cout << i << " ";
            n--;
        }
    }

    return 0;
}
