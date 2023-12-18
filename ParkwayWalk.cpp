#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,r=0;
        cin>>n>>m;
        int arr[n];
        for(int j=0;j<n;j++)
        cin>>arr[j];
        for(int j=0;j<n;j++)
        {
            if(m>=arr[j])
            {
              m=m-arr[j];
              continue;
              
            }
            else
            {
               r=r+arr[j]-m;
               m=0;



            }

        }
        cout<<r<<endl;

    }

    return 0;
}