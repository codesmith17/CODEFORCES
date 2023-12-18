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
        int a[n],b[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        label:
        for(int j=0;j<n;j++)
        {
            if(a[j]>0)
            {
                a[j]=a[j]-1;
            }
        }
        int op=0;
         for(int j=0;j<n;j++)
         {
            if(a[j]==b[j])
            {
                op++;
            }
         }
         int fail=0;
          for(int j=0;j<n;j++)
          {
            if(a[j]<b[j])
            fail++;
          }
         if(fail>0)
        {
            cout<<"NO"<<endl;
           continue;
        }
         if(op==n)
         cout<<"YES"<<endl;
         else
         {
            goto label;
         }
        
    }

    return 0;
}