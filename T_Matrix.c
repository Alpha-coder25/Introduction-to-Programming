#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int primary = 0;
    int secondary = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
            {
                primary += a[i][j];
            }
            if(i+j == n-1)
            {
                secondary += a[i][j];
            }
        }
    }
    
    int sum = abs(primary-secondary);
    printf("%d",sum);
    return 0;
}