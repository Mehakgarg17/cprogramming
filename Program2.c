#include <stdio.h>
int main()
{

    int number1, number2, add, subtract, multiply, divide;

    printf("Enter two integers:");
    scanf("%d %d", &number1, &number2);

    add = number1 + number2;
    subtract = number1 - number2;
    multiply = number1 * number2;
    divide = number1 / number2;

    printf("add=%d \nsubtract=%d\nmultiply=%d\ndivide=%d", add, subtract, multiply, divide);

    return 0;
}
