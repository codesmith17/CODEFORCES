#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int op1=0,op2=0,op3=0,a,b,c;
        cin>>a>>b>>c;

        for(int x=1;;x++)
        {
             for(int y=1;;y++)
             {
                 for(int z=1;;z++)
                 {
                    if(x%y==a && y%z==b && z%x==c)
                    {
                        cout<<x<<" "<<y<<" "<<z;
                    }
                }
             }
        }
        cout<<endl;
    }

    return 0;
}