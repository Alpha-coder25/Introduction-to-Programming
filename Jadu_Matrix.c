#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    int flag = true;
    if(r==c)
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                scanf("%d",&a[i][j]);

                if(i==j || i+j == r-1)
                {
                    if(a[i][j] != 1)
                    {
                            flag =false;
                    }
                }
                else if(a[i][j] != 0)
                {
                    flag = false;
                }
                
            }
        }
        if(flag == true)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else{
        printf("NO\n");
    }
    return 0;
}
