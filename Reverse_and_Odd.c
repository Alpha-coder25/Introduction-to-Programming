#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int size = sizeof(a) / sizeof(a[0]);
    for(int i=size; i>=1; i-= 2)
    {
        printf("%d ",a[i]);
    }
    return 0;
}