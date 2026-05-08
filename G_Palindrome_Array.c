#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    int i=0, j=n-1;
    while (i<j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    int ispalindrome = 1;
    for(int i=0; i<n; i++)
    {
        if (a[i] != b[i])
        {
            ispalindrome = 0;
            break;
        }
    }
    if (ispalindrome)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}