#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=n/2;i<=n;i+=2)
    {
        for(j=1;j<=n-i;j+=2)
        {
            // printf("\t");
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            // printf("\t");
            printf("*");
        }
        for(j=1;j<=n-i;j++)
        {
        // printf("\t");    
        printf(" ");
        }
        for(j=1;j<=i;j++)
        {
        // printf("\t");   
        printf("*");
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=i;j<n;j++)
        {
        // printf("\t");    
        printf(" ");
        }
        for(j=1;j<=(i*2)-1;j++)
        {
        // printf("\t");    
        printf("*");
        }
        printf("\n");
    }
}