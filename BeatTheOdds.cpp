#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int e=0,o=0;
    for(int i=0;i<t;i++)
    {
        
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            if(arr[j]%2!=0)
            o++;
            if(arr[j]%2==0)
            e++;
        }
       
       cout<<min(e,o)<<endl;
       o=e=0;
    }
            
    

    return 0;
}