/*
Project: Simple Calculator that takes two numbers and outputs the sum,difference,product and quotient
Author: Jacob Michael Ronge
Compiler: C89
License: MIT
Date: July 2020.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable diclaration
    float num1,num2,sum,difference,product,quotient;
    printf("tCalculator!\n");
    printf("Enter Two number");
    scanf("%f%f",&num1,&num2);
    // computation
    // arithmetic operation: + - / ++ -- %
    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;
    quotient = num1 / num2;
    // output
    // 20 + 30 =50
    printf("%8.2f + %8.2f = %-8.2f\n",num1,num2,sum);
    printf("%8.2f - %8.2f = %-8.2f\n",num1,num2,difference);
    printf("%8.2f * %8.2f = %-8.2f\n",num1,num2,product);
    printf("%8.2f / %8.2f = %-8.2f\n",num1,num2,quotient);
    return 0;
}
