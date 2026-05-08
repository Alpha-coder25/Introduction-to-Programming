#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int line = ((n-1)/2)+6;
    for(int i=1; i<=line; i++)
    {
        for(int j=1; j<=line-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }


    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=((2*line)-1-n)/2; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=n; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}