#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
       int n;
       cin>>n;
       int a[n],b[n],c[n];
       for(int j=0;j<n;j++)
       cin>>a[j];
       for(int j=0;j<n;j++)
       cin>>b[j];
       c[0]=b[0]-a[0];
       for(int j=1;j<n;j++)
       {
        if(b[j-1]>=a[j])
        {
            c[j]=b[j]-b[j-1];
        }
        else
        c[j]=b[j]-a[j];


       }
       for(int j=0;j<n;j++)
       {
        cout<<c[j]<<" ";

       }
       cout<<endl;
    }

    return 0;
}