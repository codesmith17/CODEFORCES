#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     int count=0;
    while(t--)
    {
        char ch[1000];
        cin>>ch;
        int k=strlen(ch);
       
        if(k==2)
        {
            if(ch[0]<=49 && ch[0]>=48 && ch[1]>=48 && ch[1]<=55)
            {
                count++;
            }
        }
           if(k==1)
        {
            if(ch[0]<=57 && ch[0]>=48 )
            {
                count++;
            }
        }
         if (strcmp (ch, "ABSINTH") == 0 || strcmp (ch, "BEER") == 0 ||strcmp (ch, "BRANDY") == 0 ||strcmp (ch, "CHAMPAGNE") == 0 ||strcmp (ch, "GIN") == 0 ||strcmp (ch, "RUM") == 0 ||strcmp (ch, "SAKE") == 0 ||strcmp (ch, "TEQUILA") == 0 ||strcmp (ch, "VODKA") == 0 ||strcmp (ch, "WHISKEY") == 0 ||strcmp (ch, "WINE") == 0  )
         count++;  
       

        
    }
cout<<count<<endl;
    return 0;
}