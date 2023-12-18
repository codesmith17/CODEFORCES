#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h1,h2,h3,n;
        cin>>n;
        
        
            for(int h1=1;h1<n;h1++)

            {
                for(int h2=1;h2<n;h2++)
                {
                    for(int h3=1;h3<n;h3++)
                    {
                       if(h1+h2+h3==n && h1>h2 && h1>h3 && h2>h3 ) 
                       {
                       cout<<h2<<" "<<h1<<" "<<h3<<endl;
                       break;
                       }
                    }
                }
               



                
            }
        


    }

    return 0;
}