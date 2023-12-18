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
        string s;
        cin >> s;
        string oks;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '?')
                count++;
            else
            {
                count++;
                while (count--)
                {
                    oks.push_back(s[i]);
                }
                count = 0;
            }
        }
        for (int i = 0; i < count; i++)
            oks.push_back('1');
        cout << oks << endl;
    }

    return 0;
}