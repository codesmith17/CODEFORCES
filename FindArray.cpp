#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int k=2;
      
        for(int j=0;j<n;j++)
        {
            arr[j]=k;
            k++;
        }
         for(int j=0;j<n;j++)
         cout<<arr[j]<<" ";

         cout<<endl;
         }

    return 0;
}