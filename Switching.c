#include<stdio.h>
int main()
{
    int i=1, j=2;
    int temp =i;
    i = j;
    j= temp;
    printf("%d %d",i,j);
    return 0;
}