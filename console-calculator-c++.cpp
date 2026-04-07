#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

double calculate(double firstNumber, double secondNumber, char operation);
double getValidNumber(const char* prompt);
char getValidOperation();
void clearInputBuffer();

int main() {
    double firstNumber;
    double secondNumber;
    char operation;
    char continueChoice;
    int validInput;

    printf("=== Console Calculator ===\n");

    do {
        printf("\n");
        firstNumber = getValidNumber("Enter first number: ");
        operation = getValidOperation();

        do {
            secondNumber = getValidNumber("Enter second number: ");

            if ((operation == '/' || operation == '%') && secondNumber == 0) {
                printf("Error: division by zero! Please enter a non-zero number.\n");
                validInput = 0;
            }
            else {
                validInput = 1;
            }
        } while (!validInput);

        double result = calculate(firstNumber, secondNumber, operation);

        if (operation == '%') {
            printf("Result: %d\n", static_cast<int>(result));
        }
        else {
            printf("Result: %.2f\n", result);
        }

        printf("\nDo another calculation? (y/n): ");
        scanf(" %c", &continueChoice);
        clearInputBuffer();

    } while (continueChoice == 'y' || continueChoice == 'Y');

    printf("\nGoodbye!\n");
    return 0;
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

double getValidNumber(const char* prompt) {
    double number;
    int result;

    do {
        printf("%s", prompt);
        result = scanf("%lf", &number);
        clearInputBuffer();

        if (result != 1) {
            printf("Error: please enter a valid number!\n");
        }

    } while (result != 1);

    return number;
}

char getValidOperation() {
    char operation;
    int result;

    do {
        printf("Enter operation (+, -, *, /, %%): ");
        result = scanf(" %c", &operation);
        clearInputBuffer();

        if (result == 1 && (operation == '+' || operation == '-' ||
            operation == '*' || operation == '/' || operation == '%')) {
            return operation;
        }

        printf("Error: valid operations are: +, -, *, /, %%\n");

    } while (1);
}

double calculate(double firstNumber, double secondNumber, char operation) {
    double result = 0;

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
        result = firstNumber / secondNumber;
        break;
    case '%':
        result = static_cast<int>(firstNumber) % static_cast<int>(secondNumber);
        break;
    }

    return result;
}