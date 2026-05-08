#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;  i<=n; i++)
    {
        char s[10001];
        scanf("%s",s);
        int count1=0, count2=0, count3=0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                count1++;
            }
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                count2++;
            }
            else if(s[i] >= '0' && s[i] <= '9')
            {
                count3++;
            }
        }
        printf("%d %d %d\n",count1,count2,count3);
        
    }
    return 0;
}