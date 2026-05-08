#include<stdio.h>
int main()
{
    for(int i=1; i<=10; i++)
    {
        printf("%d\n",i);
        if ( i== 5)
        {
            continue; //continue skips the value
        }
    }
    return 0;
}