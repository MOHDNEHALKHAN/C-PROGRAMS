/*PROGRAM USING MULTIPLE DIMENSIONAL ARRAY*/

#include <stdio.h>

int main() {
    int a[3][3], i, j;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix elements:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]); // Change '\n' to ' '
        }
        printf("\n"); // Add a newline at the end of each row
    }

    return 0;
}
