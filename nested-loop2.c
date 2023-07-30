#include <stdio.h>

void printPattern(int n) {
    int i, j;

    // Upper half of the pattern
    for (i = 1; i <= n; i++) {
        // Print the numbers in the left half
        for (j = 1; j <= i; j++) {
            printf("%d", i);
            if (j < i) {
                printf("*");
            }
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = n - 1; i >= 1; i--) {
        // Print the numbers in the left half
        for (j = 1; j <= i; j++) {
            printf("%d", i);
            if (j < i) {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}
