#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k=(log10(n) + 1);
        int op=0;
      
       for(int j=0;j<n;j++)
       {
        int k=n/pow(10,j);
        
        if(k%2==0)
        {
            op++;
            if(op==1 && j==0)
            {
                cout<<"0"<<endl;
            }
            if(op>0)
            break;

        }
       }
       if(op==0)
       {
        cout<<"-1"<<endl;
       exit(0);
       }
       int arr[k];
       for(int j=n-1;j>=0;j--)
       {
        arr[j]=
       }

    }

    return 0;
}