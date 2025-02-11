#include <stdio.h>

int main() {
    int n;
    // printf("Enter the size of the square: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= n; j++) {  // Loop for columns
            if (i == 1 || i == n || j == 1 || j == n) 
                printf("*");  // Print stars at boundaries
            else 
                printf(" ");  // Print spaces inside
        }
        printf("\n");  // Move to the next line
    }
    return 0;
}
