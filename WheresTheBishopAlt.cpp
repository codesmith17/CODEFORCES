#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>arr[i][j];
            }
        }
        int x,y;
        for(int i=1;i<=6;i++)
        {
            for(int j=1;j<=6;j++)
            {
                int count=0;
                if(arr[i][j]=='#' && arr[i+1][j+1]=='#' && arr[i-1][j+1]=='#' && arr[i-1][j-1]=='#' && arr[i+1][j-1]=='#')
                {
                    x=i,y=j;


                }
            }
        }
    }

    return 0;
}