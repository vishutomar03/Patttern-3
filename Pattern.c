/*
*
*   Author : Vishu Tomar
*   About Program : This program prints the following Pattern-
     For n=5
*
*     1          
*     0 1   
*     1 0 1    
*     0 1 0 1    
*     1 0 1 0 1   
*
*
*
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the range of the pattern:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(int j=1;j<=i;j++)
            {
                if(j%2==0)
                    printf("1");
                else
                    printf("0");
            }
        }
        else if(i%2!=0)
        {
             for(int j=1;j<=i;j++)
            {
                if(j%2!=0)
                    printf("1");
                else
                    printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
