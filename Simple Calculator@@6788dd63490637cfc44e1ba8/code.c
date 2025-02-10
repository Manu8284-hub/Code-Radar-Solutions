#include <stdio.h>
int main() {
    int a, b;
    char operator;
    
    // Input two integers and an operator
    scanf("%d %d %c", &a, &b, &operator);

    switch (operator) {
        case '+':
            printf("%d\n", a + b);
            break;

        case '-':
            printf("%d\n", a - b);
            break;

        case '*':
            printf("%d\n", a * b);
            break;

        case '/':
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("Error\n");
            }
            break;

        default:
            printf("Error");
            break;
    }

    return 0;
}

   