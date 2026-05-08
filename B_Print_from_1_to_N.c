#include<stdio.h>
void hello(int i, int n)
{
    if (i==n+1)
    {
        return;
    }
    printf("%d\n",i);
    hello(i+1,n);//recursion
}
int main()
{
    int i=1,n;
    scanf("%d",&n);
    hello(i,n);
    return 0;
}