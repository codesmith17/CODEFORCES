#include<iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char str[5];
        int x;
        cin>>str>>x;
        char hh[2];
        for(int j=0;j<2;j++)
        {
            hh[j]=str[j];
        }
        char mm[2];
        for(int j=3;j<=4;j++)
        {
            mm[j]=str[j];
        }
        
        int h=atoi(hh);
        int m=atoi(mm);
        int min=m+60*h;
        for(int j=0; ;j++)
        {
           
            
        }

    }

    return 0;
}