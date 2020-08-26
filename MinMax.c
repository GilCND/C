/*
-------------------------------------------------------------------------------------
PROGRAM INFO:
Program: MinMax.c
Date: 29/01/2020
Autor: Felipe SG
Program Details: Create an application that prompts a user to enter 3 numbers. Create 
a function that accepts all 3 values and returns the largest of the 3 numbers. Display 
the result of the function call using the following format: Largest of num1, num2, 
num3 is largestNum
-------------------------------------------------------------------------------------
Change-log
-------------------------------------------------------------------------------------
|       Date        |   Programmer   |                   Changelog                   | 
    Jan-29-2020         Felipe SG                   First Version  1.0         
*/


#include <stdio.h>
double number1 = 0, number2 = 0, number3 =0;
int maxValue(int n);

int main ()
{
   // Prompts a user to enter 3 numbers.
    int x = 0;
    int num = 0;
    int ch;
    printf("Please inform the first number: ");
    scanf ("%lf", &number1);
    while ( ( ch = getchar() ) != '\n' && ch != EOF );
        
    printf("Please inform the second number");
    scanf ("%lf", &number2);
    while ( ( ch = getchar() ) != '\n' && ch != EOF );

    printf("Please inform the number3");
    scanf ("%lf", &number3);
     while ( ( ch = getchar() ) != '\n' && ch != EOF );
    
    num = maxValue(x);
    printf("Largest of %0.1lf,%0.1lf, %0.1f is:  %d\n", number1, number2, number3, num);

    return 0;
}

//Create a function that accepts all 3 values and returns the largest of the 3 numbers
int maxValue(int result)
{
    if (number1 > number2 && number1 > number3)
    {
        return number1;
    }
    else if (number2 > number1 && number2 > number3)
    {
        return number2;
    }
    else
    {
       return number3;
    }
}
