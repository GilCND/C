/*
-------------------------------------------------------------------------------------
PROGRAM INFO:
Program: 4functionsAssignment1.c
Date: 28/01/2020
Autor: Felipe SG
Program Details: Create an application that prompts a user to enter two numbers. Create
4 functions (addThem, subtractThem, multiplyThem, and divideThem) that accepts both 
entered values, does the appropriate mathematic operation, and sends the result back 
to the program. After the numbers are entered (and verified), call each function in 
your program and display the result of the function calls using the following format:
x plus y is result, x minus y is result2, etc...
-------------------------------------------------------------------------------------
Change-log
-------------------------------------------------------------------------------------
|       Date        |   Programmer   |                   Changelog                   | 
    Jan-28-2020         Felipe SG                  First Version  1.0         
*/

#include <stdio.h>
double number1 = 0, number2 = 0;
int addThem(int n), subtractThem(int n), multiplyThem(int n), divideThem(int n);

int main ()
{
    int x = 0;
    int num = 0;
    int ch;
    printf("Please inform the first number: ");
    scanf ("%lf", &number1);
    while ( ( ch = getchar() ) != '\n' && ch != EOF );

    printf("Please inform the second number");
    scanf ("%lf", &number2);
    while ( ( ch = getchar() ) != '\n' && ch != EOF );
    /*
    Display the result of the function calls using the following format:
    x plus y is result, x minus y is result2, etc...
    */
    num = addThem(x);
    printf("%0.1lf plus %0.1lf = %d\n", number1, number2, num);
    num = subtractThem(x);
    printf("%0.1lf minus %0.1lf = %d\n", number1, number2, num);
    num = multiplyThem(x);
    printf("%0.1lf multiplied by %0.1lf = %d\n", number1, number2, num);
    num = divideThem(x);
    printf("%0.1lf divided by %0.1lf = %d\n", number1, number2, num);
    return 0;
}

//function addThem
int addThem(int result)
{
result = number1 + number2;
return result;
}
//function subtractThem
int subtractThem(int result)
{
result = number1 - number2;
return result;
}
//function multiplyThem
int multiplyThem(int result)
{
result = number1 * number2;
return result;
}
//function divideThem
int divideThem(int result)
{
result = number1 / number2;
return result;
}


