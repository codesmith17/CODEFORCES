#include <bits/stdc++.h>
using namespace std;

const int N = 4;
int b[N][N];

int main()
{
    int n, m;
    cin >> n >> m;

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[i][j] = rand() % (1 << 16); 
        }
    }

    
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = 0; j < m - 3; j++)
        {
            int a[N][N] = {{b[i][j], b[i][j + 1], b[i + 1][j], b[i + 1][j + 1]},
                           {b[i][j + 2], b[i][j + 3], b[i + 1][j + 2], b[i + 1][j + 3]},
                           {b[i + 2][j], b[i + 2][j + 1], b[i + 3][j], b[i + 3][j + 1]},
                           {b[i + 2][j + 2], b[i + 2][j + 3], b[i + 3][j + 2], b[i + 3][j + 3]}};
            int r1 = a[0][0] ^ a[0][1] ^ a[1][0] ^ a[1][1];
            int r2 = a[0][2] ^ a[0][3] ^ a[1][2] ^ a[1][3];
            int r3 = a[2][0] ^ a[2][1] ^ a[3][0] ^ a[3][1];
            int r4 = a[2][2] ^ a[2][3] ^ a[3][2] ^ a[3][3];
            a[2][2] = r1 ^ r2 ^ r3 ^ r4; 
            b[i + 2][j + 2] = a[2][2];   
        }
    }

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
