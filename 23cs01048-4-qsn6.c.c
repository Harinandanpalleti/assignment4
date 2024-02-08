#include <stdio.h>
int main()
{
    char op;
    int num1, num2, result = 0;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: \n");
    scanf("%d %d", &num1, &num2);
    switch (op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator!\n");
            return 0;
    }
    printf("%d %c %d = %d\n", num1, op, num2, result);
    return 0;
}
