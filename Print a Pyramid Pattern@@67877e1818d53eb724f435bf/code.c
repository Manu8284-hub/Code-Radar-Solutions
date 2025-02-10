#include <stdio.h>

int main() {
    int i, j, space, n;
    // printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) { // Loop for rows
        for (space = 1; space <= n - i; space++) { // Printing spaces
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) { // Printing stars
            printf("*");
        }
        printf("\n"); // Move to the next line
    }
    
    return 0;
}
