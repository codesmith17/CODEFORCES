#include <bits/stdc++.h>
using namespace std;
#define rep(i,a1,b1) for(int i=a1;i<=b1;i++)

#define ll long long int

int main()
{
    int t,n,mod=1000000007;
    cin>>t;
    while(t--){
        cin>>n;
        ll ans=n;
        ans=ans*(n+1);
        ans=ans%mod;
        ans=ans*((4*n-1)%mod);
        ans=ans%mod;
        ans=ans/6;
        ans=ans%mod;
        ans=(2022*ans)%mod;

        cout<<ans<<endl;
    }
}