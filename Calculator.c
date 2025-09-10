#include <stdio.h>
#include <float.h>

int main() {
    char op, choice;
    double a, b, res;

    do {
        printf("\nEnter an operator (+, -, *, /): ");
        scanf(" %c", &op);
        printf("Enter two operands: ");
        scanf("%lf %lf", &a, &b);

        switch (op) {
            case '+':
                res = a + b;
                break;
            case '-':
                res = a - b;
                break;
            case '*':
                res = a * b;
                break;
            case '/':
                if (b == 0) {
                    printf("Error! Division by zero\n");
                    continue;                }
                res = a / b;
                break;
            default:
                printf("Error! Incorrect Operator Value\n");
                continue;        }

        printf("Result: %.2lf\n", res);

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Calculator closed. Goodbye!\n");
    return 0;
}
