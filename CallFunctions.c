/*
-------------------------------------------------------------------------------------
PROGRAM INFO:
Program: callFunctions.c
Date: 25/02/2020
Autor: Felipe Gil
Program Details:
Create an application with a functions named newInt, newDouble, newFloat, and newCharArray. 
Each function is to dynamically allocate memory to store a value of the indicated data type 
(need to send a size parameter to the character array function). The function will return a 
memory address to the main program where it initializes a pointer. Store an appropriate value
in each memory address and then display the value stored.

-------------------------------------------------------------------------------------
Change-log
-------------------------------------------------------------------------------------
|       Date        |   Programmer   |                   Changelog                   | 
    Feb-25-2020         Felipe Gil                   First Version  1.0         
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//functions newInt
int *newInt() 
{
    int *newInt;
         newInt =  (int *)malloc(sizeof(int));
         return newInt;
}

//functions double
double *newDouble() 
{
    double *newDouble;
            newDouble =  (double *)malloc(sizeof(double));
            return newDouble;
}

//functions float
float *newFloat() 
{
    float *newFloat;
           newFloat =  (float *)malloc(sizeof(float));
           return newFloat;
}

//functions CharArray
char *newCharArray(int size) 
{
    char *newCharArray;
          newCharArray =  (char *)malloc(sizeof(char) *(size +1));
          return newCharArray;
}

int main () 
{
    int *i_var = newInt();
    double *d_var = newDouble();
    float *f_var = newFloat();
    char *c_var = newCharArray(100);
   
    //function Int
    printf("Enter a Integer Value :");
    scanf("%i", i_var);
    //function Double
    printf("Enter a Double Value:");
    scanf("%lf", d_var);
    //function Float
    printf("Enter a Float Value:");
    scanf("%f", f_var);
    //function Char
    puts("File name:");
    scanf("%s", c_var);
 

    //Print all information
    printf("________________\n");
    printf("Integer: %i\n", *i_var);
    printf("Double: %lf\n", *d_var);
    printf("Float: %f\n", *f_var);
    printf("Character: %s\n", c_var);
    return 0;
}
