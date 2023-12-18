#include<stdio.h>
int gcd(int,int);
int lcm(int,int);
int main()
{
    int t,x;
    scanf("%d",&t);
    int arr[4][t];
    for(int i=0;i<t;i++)
    {   int j=0,k=0;
        scanf("%d",&x);
        for(int a=1;a<=x;a++)
        { 
            for(int b=1;b<=x;b++)
            {
                for(int c=1;c<=x;c++)
                {
                    for(int d=1;d<=x;d++)
                    {
                        if(a+b+c+d==x && (gcd(a,b)==lcm(c,d)))
                        {
                            arr[j][k]=a;
                            k++;
                            arr[j][k]=b;
                            k++;
                            arr[j][k]=c;
                            k++;
                            arr[j][k]=d;
                            j++;

                        }


                    }
                }

            }
            
        }


    }
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
int gcd(int n1,int n2)
{   int GCD;
    for(int i=1;i<=n1 && i<=n2;i++)
    {   
        if(n1%i==0 && n2&i==0)
        {
            GCD=i;

        }
        
    }
    return GCD;
}
int lcm(int n1,int n2)
{
    int a=gcd(n1,n2);
    int LCM=(n1*n2)/a;
    return LCM;
}