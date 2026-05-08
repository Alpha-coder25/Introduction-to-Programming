#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];  // Regular summation
    }

    printf("%lld\n", llabs(sum));  // Print absolute value of final sum
    return 0;
}


