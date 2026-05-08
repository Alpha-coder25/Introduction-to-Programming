#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for ( int i=1; i<= test; i++)
    {
        int m1,m2,d1,d2,sub;
        scanf("%d%d%d",&m1,&m2,&d1);
        d2 = (m1*d1)/(m1+m2);
        sub = d1-d2;
        printf("%d\n",sub);
    }
    

    return 0;
}