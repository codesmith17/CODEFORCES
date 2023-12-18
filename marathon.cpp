#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int k=0;
        if(b>a)
        {
            k++;
        }
         if(c>a)
        {
            k++;
        }
         if(d>a)
        {
            k++;
        }
        cout<<k<<endl;
    }

    return 0;
}