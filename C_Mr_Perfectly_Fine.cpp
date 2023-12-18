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
        vector<pair<int, string>> vec;
        for (int i = 0; i < n; i++)
        {
            int a;
            string b;
            cin >> a >> b;
            vec.push_back({a, b});
        }
        sort(vec.begin(), vec.end());
        int count1 = -1, count2 = -1, count3 = -1;
        for (int i = 0; i < n; i++)
        {
            if (vec[i].second == "10")
            {
                count1 = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (vec[i].second == "01")
            {
                count2 = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (vec[i].second == "11")
            {
                count3 = i;
                break;
            }
        }
        if (count3 == -1)
        {
            if (count1 == -1 or count2 == -1)
            {
                cout << -1 << endl;
                continue;
            }
        }
        else
        {
            if (count1 != -1 and count2 != -1)
            {
                cout << max((vec[count1].first + vec[count2].first), vec[count3].first) << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        
    }
    return 0;
}