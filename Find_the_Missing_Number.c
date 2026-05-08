#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        long long m,a,b,c,res;
        scanf("%lld%lld%lld%lld",&m,&a,&b,&c);
        
        res = m/(a*b*c);
        if (res*a*b*c == m)
        {
            printf("%lld\n",res);
        }

        else{
            printf("-1\n");
        }
    }
    return 0;
}