#include<stdio.h>
int main()
{
    int pass;
    while(scanf("%d",&pass))
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219432/my