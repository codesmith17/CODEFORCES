#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,s;
        cin>>n>>s;
        int arr[n];
        for(int j=0;j<n;j++)
        cin>>arr[j];
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[j];

        }
        int op=0;
       
        if(sum==s)
        cout<<op<<endl;
        
        else
        {
             int j=1;
            int m=n;
            int f=j;
            label:
            
            sum=0;
            op++;
            for(j;j<m-1;j++)
            {
                sum=sum+arr[j];
               


            }
            j=f;


            
            if(sum==s)
        cout<<op<<endl;
        else
        {
            
            j++;
            f++;
            m--;
            if(j>m)
            {
                cout<<"-1"<<endl;
                continue;
            }
            goto label;

        }

        }

       
    }

    return 0;
}