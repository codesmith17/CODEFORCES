#include <bits/stdc++.h>
using namespace std;
#define rep(i, a1, b1) for (int i = a1; i < b1; i++)
#define nl endl
#define ll long long int

int main()
{
    int n, m;
    string filename("input.txt");
    vector<int> numbers;

    ifstream input_file(filename);

    while (!input_file.eof())
    {
        int tmp;
        input_file >> tmp;
        numbers.push_back(tmp);
    }
    n = numbers[0];
    m = numbers[1];
    ofstream MyFile("output.txt");

    if (n > m)
    {
        rep(i, 0, m)
                MyFile
            << "BG";

        rep(i, 0, n - m)
                MyFile
            << "B";
    }
    else
    {
        rep(i, 0, n)
                MyFile
            << "GB";

        rep(i, 0, m - n)
                MyFile
            << "G";
    }

    return 0;
}