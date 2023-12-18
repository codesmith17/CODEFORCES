#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t,x,n,ans;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
              int k=3,x;
    x=4;
    while(n%k!=0  && n>k)
    {
        k=k+x;
        x=x*2;
    }
    if(n>=k)
        cout<<n/k<<endl;
    
    }
}