#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
            int temp=0;

               for (int k = 0; k < n; k++) {     
        for (int l = k+1; l < n; l++) {     
           if(arr[k] > arr[l]) {    
               temp = arr[k];    
               arr[k] = arr[l];    
               arr[l] = temp;    
           }     
        }     
    } 
        }
    }

    return 0;
}