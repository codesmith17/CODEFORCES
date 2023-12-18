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
    string s = "codeforces";
    int t;
    cin >> t;
    while (t--)
    {
        string p;
        cin >> p;
        int count = 0;
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] - s[i] != 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}