#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    char a[101];
    for(int i=1; i<=test; i++)
    {
        scanf("%s",a);
        int size = strlen(a);
        if (size <=10)
        {
            printf("%s\n",a);
        }
        else{
            int count =0;
            for(int i =0; i<=size; i++){
                if (size <=2)
                {
                    count =0;
                }
                else{
                    count = size-2;
                }  
            }
            printf("%c%d%c\n",a[0],count,a[size-1]);
        }
    }

    return 0;
}