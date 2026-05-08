#include<stdio.h>
#include<limits.h>
int main()
{
    int n, max=INT_MIN, value;
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&value);
        if (value>max)
        {
            max = value;
        }
    }
    printf("%d",max);
    return 0;
}