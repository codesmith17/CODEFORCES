#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char s1[8];
         char s2[8];
          char s3[8];
           char s4[8];
            char s5[8];
             char s6[8];
              char s7[8];
               char s8[8];
               int k=0,m;
        
  int j;
        for(int j=0;j<8;j++)
        cin>>s1[j];
        for(int j=0;j<8;j++)
        cin>>s2[j];
        for(int j=0;j<8;j++)
        cin>>s3[j];
        for(int j=0;j<8;j++)
        cin>>s4[j];
        for(int j=0;j<8;j++)
        cin>>s5[j];
        for(int j=0;j<8;j++)
        cin>>s6[j];
        for(int j=0;j<8;j++)
        cin>>s7[j];
        for(int j=0;j<8;j++)
        cin>>s8[j];
        
        for(j=0;j<8;j++)
        {
            if(s2[j]=='#')
            {
                k++;
                m=j;

            }
            
            
            

        }
        
        if(k==1)
        {
            cout<<"2 "<<m+1<<endl;
           continue;
        }
        k=0;
        for(j=0;j<8;j++)
        {
            if(s3[j]=='#')
            {
                k++;
                m=j;

            }
            
            

        }
        if(k==1)
        {
            cout<<"3 "<<m+1<<endl;
             continue;
        }
        k=0;
        for(j=0;j<8;j++)
        {
            if(s4[j]=='#')
            {
                k++;
                m=j;

            }
            
            

        }
        if(k==1)
        {
            cout<<"4 "<<m+1<<endl;
             continue;
        }
        k=0;
        for(j=0;j<8;j++)
        {
            if(s5[j]=='#')
            {
                k++;

                m=j;

            }
            
            

        }
        if(k==1)
        {
            cout<<"5 "<<m+1<<endl;
            continue;
        }
        k=0;
        for(j=0;j<8;j++)
        {
            if(s6[j]=='#')
            {
                k++;
                m=j;

            }
            
            

        }
        if(k==1)
        {
            cout<<"6 "<<m+1<<endl;
            continue;
        }
        k=0;
        for(j=0;j<8;j++)
        {
            if(s7[j]=='#')
            {
                k++;
                m=j;

            }
            
            

        }
        if(k==1)
        {
            cout<<"7 "<<m+1<<endl;
             continue;
        

    }k=0;
    }
    

    return 0;
}