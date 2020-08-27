/*
-------------------------------------------------------------------------------------
PROGRAM INFO:
Program: OrderdArray.c
Date: 10/02/2020
Autor: Felipe SG
Program Details: Create an application that prompts the user for a sequence of 10 
numbers. Create a function that will sort the array from largest-to-smallest value 
(do not use any built-in sort). Display each value in the ordered array.
-------------------------------------------------------------------------------------
Change-log
-------------------------------------------------------------------------------------
|       Date        |   Programmer   |                   Changelog                   | 
    Feb-10-2020         Felipe SG                   First Version  1.0         
*/


#include <stdio.h>

int num [10];
int x =0;

int main()
{
    for (x =0; x<10; x++)
    {
        printf ("Please Inform 10 numbers:\n");
        scanf ("%d", &num[x]);
    }
    //sort the array 
    for (int x = 0; x<10; x++)
    {
        for (int y = 0; y<10; y++)
        {
            if (num[y] < (num[x]))
            {
                //create a temporary variable to store the smallest number.
                int tempValue = num[y];
                //copy the largest number into the spot of the smallest one.
                num[y] = num[x];
                //use the temporary variable to copy the smallest number into the spot of the largest.
                num[x] = tempValue;
            }
        }
    }
    //In order to print the array we need a for loop
    printf("\n\n The sorting array from largest-to-smallest would look like");
    for (num[x] = 0; x < 10; x++)
    {
        printf("\n%d", num[x]);
    }

return 0;
}
