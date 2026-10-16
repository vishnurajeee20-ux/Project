/*
   Requirement:
              1.Define a Complex structure with real and imaginary parts.
              2.Add two complex numbers using a function.
              3.Display the sum in the format a + bi.
                
   Design (Algorithm):
                      1.Use a structure to store the real and imaginary parts.
                      2.Use the add() function to add the two complex numbers.
                      3.Use the display() function to print the result.
   Output:                       
            Example 1: 
                       Enter real and imaginary parts of first number: 3 4
                       Enter real and imaginary parts of second number: 2 5
                       Sum = 5.0 + 9.0i
*/


#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};

struct Complex add(struct Complex a, struct Complex b)
{
    struct Complex c;

    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;

    return c;
}

void display(struct Complex c)
{
    printf("%.1f + %.1fi\n", c.real, c.imag);
}

int main()
{
    struct Complex a, b, sum;

    printf("Enter real and imaginary parts of first number: ");
    scanf("%f %f", &a.real, &a.imag);

    printf("Enter real and imaginary parts of second number: ");
    scanf("%f %f", &b.real, &b.imag);

    sum = add(a, b);

    printf("Sum = ");
    display(sum);

    return 0;
}




