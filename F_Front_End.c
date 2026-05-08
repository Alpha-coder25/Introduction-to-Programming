#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    // Read array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int left = 0, right = n - 1;

    // Alternately print front and back
    while (left <= right) {
        if (left == right) {
            // Only one element left
            printf("%d", a[left]);
        } else {
            printf("%d %d ", a[left], a[right]);
        }
        left++;
        right--;
    }

    return 0;
}
