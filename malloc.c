/*
-------------------------------------------------------------------------------------
PROGRAM INFO:
Program: Malloc.c
Date: 24/02/2020
Autor: Felipe Gil
Program Details:
Create an application to allocate enough memory to store 10 integer values (NOT AN ARRAY). 
Prompt the user for a sequence of 10 numbers and store them in the memory block you allocated. 
Create a function that will sort the values from largest-to-smallest value (do not use any 
built-in sort). Display each value in the ordered memory.
Note: Use pointers throughout.
-------------------------------------------------------------------------------------
Change-log
-------------------------------------------------------------------------------------
|       Date        |   Programmer   |                   Changelog                   | 
    Feb-24-2020         Felipe Gil                   First Version  1.0         
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Allocate enough memory to store 10 integer values
    int *number,x;
    number = (int *)malloc(10*sizeof(int));


    //Prompt the user for a sequence of 10 numbers and store them in the memory block you allocated
    for (x =0; x<10; x++)
    {
        printf ("Please Inform 10 numbers:\n");
        scanf ("%d", &*(number +x));
    }

    //sort
    for (int x = 0; x<10; x++)
    {
        for (int y = 0; y<10; y++)
        {
            if (*(number+y) < *(number+x))
            {
                //create a temporary variable to store the smallest number.
                int tempValue = *(number+y);
                //copy the largest number into the spot of the smallest one.
                *(number+y) = *(number+x);
                //use the temporary variable to copy the smallest number into the spot of the largest.
                *(number+x) = tempValue;
            }
        }
    }
    //In order to print we need a for loop
    printf("\n\n The sorting array from largest-to-smallest would look like");
    for (x = 0; x < 10; x++)
    {
        printf("\n%d", *(number +x));
    }

    return 0;
}





