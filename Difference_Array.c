#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        int b[n];
        int c[n];

        for(int i=0; i<n; i++)
            {
                b[i]=a[i];
            }

        for(int i=0; i<n-1; i++)
        {
            int ind = i;
            for(int j=i+1; j<n; j++)
            {
                if(b[j]<b[ind])
                {
                    ind = j;
                }
            }
            int temp =b[i];
            b[i] = b[ind];
            b[ind] = temp;
        }

        for(int i=0; i<n; i++)
        {
            c[i] = abs(a[i]-b[i]);
        }
        for (int i=0; i<n; i++)
        {
            printf("%d ",c[i]);
        }
        printf("\n");
    }
}