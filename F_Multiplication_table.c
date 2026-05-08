#include<stdio.h>
int main()
{
    int n, product;
    scanf("%d",&n);
    for (int i=1; i<=12; i++)
    {
        product = n*i;
        printf("%d * %d = %d\n",n,i,product);
    }
    return 0;
}//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F