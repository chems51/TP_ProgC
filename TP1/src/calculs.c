#include <stdio.h>

int main(void) {
    int num1 = 10;
    int num2 = 3;
    char op = '&';

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;
        case '%':
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            break;
        case '&':
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|':
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~':
            printf("~%d = %d\n", num1, ~num1);
            break;
        default:
            printf("Opérateur inconnu\n");
            break;
    }

    return 0;
}

