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
        int arr[n];
        for(int j=0;j<n;j++)
        cin>>arr[j];
         int res = 1;
 
    
    for (int j = 1; j < n; j++) {
        int k = 0;
        for (k = 0; k < j; k++)
            if (arr[j] == arr[k])
                break;
 
      
        if (k == j)
            res++;
           

          
    }
     if((n-res)%2!=0)
           cout<<res-1<<endl;
           else
           cout<<res<<endl;

    

    }

    return 0;
}