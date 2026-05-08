#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int space = n - 1, hash_count = 1, dash_count = 1;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        space--; // Reduce space count each row

        // Print pattern
        if (i % 2 != 0) {
            for (int j = 1; j <= hash_count; j++) {
                printf("#");
            }
            hash_count += 2; // Increase hash count for next odd row
        } else {
            for (int j = 1; j <= dash_count; j++) {
                printf("-");
            }
            dash_count += 2; // Increase dash count for next even row
        }
        printf("\n");
    }
    
    return 0;
}
