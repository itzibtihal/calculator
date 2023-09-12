#include <stdio.h>

// Function  addition
double add(double num1, double num2) {
    return num1 + num2;
}

// Function  subtraction
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function  multiplication
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function  division
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf(" !!!!! Error !!!! : Division by zero!\n");
        return 0;
    }
}

int main() {
    char operator;
    double num1, num2, result;

    printf("Simple Console Calculator\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
