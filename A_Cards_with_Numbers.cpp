
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[600005];

    string filename("input.txt");
    vector<int> numbers;

    ifstream input_file(filename);

    while (!input_file.eof())
    {

        input_file >> n;

        for (int i = 0; i < 2 * n; i++)
        {
            input_file >> arr[i];
        }
    }

    ofstream MyFile("output.txt");
   
    int count = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = i + 1; j < 2 * n; j++)
        {
            if (arr[i] == arr[j] && arr[i] != -1)
            {
                MyFile << i + 1 << " " << j + 1;
                arr[i] = -1;
                arr[j] = -1;
                count++;
                break;
            }
        }
        MyFile << endl;
    }
    if (count == 0)
        MyFile << "-1";

    return 0;
}