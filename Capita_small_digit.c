#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch>='0' && ch<='9')
    {
        printf("IS DIGIT\n");
    }
    else{
        if (ch>='a' && ch<='z')
        {
            printf("ALPHA\n");
            printf("IS SMALL\n");
        }
        else{
            printf("ALPHA\n");
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}