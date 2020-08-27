/*
-------------------------------------------------------------------------------------
PROGRAM INFO:
Program: orderedArray.c
Date: 10/02/2020
Autor: Felipe SG
Program Details: Create an application where you declare and initialize an array of 10 numbers 
(set in the program, not entered as input). Prompt the user for a value and the array position 
where the number is to be inserted. Rather than simply overwriting the value at this position, 
your program will shift the current values starting at the insertion point.

Example:
Array is 11 12 13 14 15 16 17 18 19 20
User is to enter 99 at position 3
Array becomes 11 12 99 13 14 15 16 17 18 19

Display each value in the ordered array.
-------------------------------------------------------------------------------------
Change-log
-------------------------------------------------------------------------------------
|       Date        |   Programmer   |                   Changelog                   | 
    Feb-10-2020         Felipe SG                   First Version  1.0         
*/


#include <stdio.h>

//Declare and initialize an array of 10 numbers 
int num [10] = {10,20,30,40,50,60,70,80,90,100};
int value;
int position, temp;
int x = 0;

int main()
{

        printf ("Please Inform the value that you want to insert into the array:\n");
        scanf ("%d", &value);
        printf ("Please Inform the position that you want to insert it:\n");
        scanf ("%d", &position);

    //copy the values, from the last to the position.
    for (int x = 10; x>position; x--)
    {
        num[x] = num[x-1];
    }
    
    num[position] = value;

    //In order to print the array we need a for loop
    printf("\n\n The sorting array from largest-to-smallest would look like");
    for (x = 0; x < 10; x++)
    {
        printf("\n%d", num[x]);
    }

return 0;
}


