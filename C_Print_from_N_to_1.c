#include<stdio.h>
void hello(int i, int n)
{
    if (i==n+1)
    {
        return;
    }
    hello(i+1,n);//recursion
    if(i == 1)
    {
        printf("%d",i);
    }
    else{
        printf("%d ",i);
    }
}
int main()
{
    int i=1,n;
    scanf("%d",&n);
    hello(i,n);
    return 0;
}