#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

double calculate(double firstNumber, double secondNumber, char operation);

int main() {
    double firstNumber;
    double secondNumber;
    char operation;
    char continueChoice;

    printf("=== Console Calculator ===\n");

    do {
        printf("\nEnter first number: ");
        scanf("%lf", &firstNumber);

        printf("Enter operation (+, -, *, /, %%): ");
        scanf(" %c", &operation);

        printf("Enter second number: ");
        scanf("%lf", &secondNumber);

        double result = calculate(firstNumber, secondNumber, operation);

        if (operation != '/' && operation != '%') {
            printf("Result: %.2f\n", result);
        }
        else if (secondNumber != 0) {
            if (operation == '/') {
                printf("Result: %.2f\n", result);
            }
            else if (operation == '%') {
                printf("Result: %d\n", static_cast<int>(result));
            }
        }

        printf("\nDo another calculation? (y/n): ");
        scanf(" %c", &continueChoice);

    } while (continueChoice == 'y' || continueChoice == 'Y');

    printf("\nGoodbye!\n");
    return 0;
}

// реализация функции calculate
double calculate(double firstNumber, double secondNumber, char operation) {
    double result = 0;
    bool validOperation = true;

    switch (operation) {
    case '+':
        result = firstNumber + secondNumber;
        break;
    case '-':
        result = firstNumber - secondNumber;
        break;
    case '*':
        result = firstNumber * secondNumber;
        break;
    case '/':
        if (secondNumber != 0.0) {
            result = firstNumber / secondNumber;
        }
        else {
            printf("Error: division by zero!\n");
            validOperation = false;
        }
        break;
    case '%':
        if (secondNumber != 0) {
            result = static_cast<int>(firstNumber) % static_cast<int>(secondNumber);
        }
        else {
            printf("Error: division by zero!\n");
            validOperation = false;
        }
        break;
    default:
        printf("Error: invalid operation '%c'\n", operation);
        validOperation = false;
        break;

        if (validOperation) {
            return result;
        }
        else {
            return 0;
        }
    }
}