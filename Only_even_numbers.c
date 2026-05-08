#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {
        if (i%2 == 0)
        {
            printf("%d is a Even number.\n",i);
        }
        else{
            printf("%d is a Odd number.\n",i);
        }
    }
    return 0;
}