/*                     (@%%
                      @@@@%%%%/
                     @@@@@%%%%%%
                     %@@@@%%%%%,
                     .@@@@%%%%%
                      @@@@%%%%,
                      .@@@%%%%
                       @@%%%
                 *@@@@@@ &%,*%%%%%#
               &@@@@@@%*     *%%%%%%%.
              @#    @@@@@@%%%%%%(.  ,#(
            #@@@@@@ @@@@@@%%%%%%%%%%%%%%,
           #@@@@@@@@@@@@@@%%%%%%%%%%%%%%%.
           &@@& .*%@@@@@@@%%%%%%%#/,  %%%*
           @@@@#        @@%%/        %%%%/
           %@@@@@@*      @%(      #%%%%%%,
              @@@@@@@@,   %   #%%%%%%%(
            ,@@ /@@@@@,       #%%%%% .%%
            .@@& @@@@@,       #%%%%# %%%
              %( @@@@@,       #%%%%% %,
                /@@@@@,       #%%%%%
                  (@@@,       #%%%.
                    #@,       #%       */
#include <bits/stdc++.h>
using namespace std;

int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;

        int counter = 0;
        int oks = 0;
        cin >> s;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                count++;
            else
                count--;
        }
        if (count != 0)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                oks++;
            else
                oks--;
            if (oks < 0)
            {
                counter++;
                break;
            }
        }
        oks = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
                oks++;
            else
                oks--;
            if (oks < 0)
            {
                counter++;
                break;
            }
        }
        if (counter < 2)
        {
            cout << 1 << endl;
            while (n--)
                cout << 1 << ' ';
            cout << endl;
        }
        else
        {
            int arr[n];
            int front = 0;
            int back = n - 1;

            while (front < back)
            {
                if (s[front] == ')' && s[back] == ')')
                {
                    arr[front] = 2;
                    arr[back] = 1;
                    front++;
                    back--;
                }
                else if (s[front] == '(' && s[back] == '(')
                {
                    arr[front] = 1;
                    arr[back] = 2;
                    front++;
                    back--;
                }
                else if (s[front] == ')' && s[back] == '(')
                {
                    arr[back] = 2;
                    arr[front] = 2;
                    front++;
                    back--;
                }
                else
                {
                    arr[front] = 1;
                    arr[back] = 1;
                    front++;
                    back--;
                }
            }
            cout << 2 << endl;
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
    return 0;
}