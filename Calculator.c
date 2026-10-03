#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("===== Simple Calculator =====\n");

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Cannot divide by zero!\n");
            } else {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            }
            break;

        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}
