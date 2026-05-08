#include<stdio.h>
int main()
{
    int r,c,x;
    scanf("%d%d",&r,&c);
    int a[r][c];
    int num =0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&x);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(a[i][j] == x)
            {
                num =1;
            }
        }
    }
    if(num == 1)
    {
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
    return 0;
}