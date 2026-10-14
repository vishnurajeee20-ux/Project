/*
   Requirement:
              1.Get two floating-point numbers and an operator from the user.
              2.Use separate functions to perform the four arithmetic operations.
              3.Handle division by zero and display the result.
   Design (Algorithm):
                     1.Use four functions for arithmetic operations.
                     2.Use if-else conditions to select the required function.
                     3.Check division by zero inside the divide() function.
   Output:                       
            Example 1: Enter two numbers: 10 5
                       Enter operator: +
                       Result = 15.00
*/    


#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Cannot divide by zero\n");
        return 0;
    }

    return a / b;
}

float calculate(float a, float b, char op)
{
    if (op == '+')
        return add(a, b);
    else if (op == '-')
        return subtract(a, b);
    else if (op == '*')
        return multiply(a, b);
    else if (op == '/')
        return divide(a, b);
    else
        printf("Invalid operator\n");

    return 0;
}

int main()
{
    float a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operator: ");
    scanf(" %c", &op);

    result = calculate(a, b, op);

    if (op == '+' || op == '-' || op == '*' ||
        (op == '/' && b != 0))
    {
        printf("Result = %.2f\n", result);
    }

    return 0;
}
