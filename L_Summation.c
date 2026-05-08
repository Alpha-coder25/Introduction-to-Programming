#include<stdio.h>
#include<stdlib.h>
void func(int a[], int n)
{
    int sum = 0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            sum += abs(a[i]+a[j]);
        }
    }
    printf("%d",sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    func(a,n);
    return 0;
}