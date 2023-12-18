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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        int min1 = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count++;
                min1 = max(min1, count);
            }
            else
                count = 0;
        }
        if (min1 == INT_MIN)
        {
            cout << 0 << endl;
            continue;
        }
        cout << min1 << endl;
    }
    return 0;
}