#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[5][5];
    int row, col;

    // Read the matrix and find the position of 1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) {
                row = i + 1; // Convert to 1-based indexing
                col = j + 1;
            }
        }
    }

    // Calculate and print the minimum number of moves
    int moves = abs(row - 3) + abs(col - 3);
    printf("%d\n", moves);

    return 0;
}
