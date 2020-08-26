/*
-------------------------------------------------------------------------------------
PROGRAM INFO:
Program: TableSize.c
Date: 23/01/2020
Autor: Felipe SG
Program Details: 1. Create an application for a furniture company which will determine 
the price of a table. Ask the user to choose 1 for pine, 2 for oak, or 3 for mahogany.
The output is the name of the wood chosen as well as the price of the table.
Pine tables cost $100, oak tables cost $225, and mahogany tables cost $310.
If the user enters an invalid wood code, set the price to 0.
Prompt the user to specify the table size (large or small), but only if the 
wood selection is valid. Add $35 to the price of any large table, and add 
nothing to the price for a small table. Display an 
appropriate message if the size value is invalid, and assume the price is for a 
small table.
-------------------------------------------------------------------------------------
Change log
-------------------------------------------------------------------------------------
|       Date        |   Programmer   |                   Changelog                   | 
    Jan-23-2020         Felipe SG                   First Version  1.0         

*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int ch;
 float price = 0, scapeValve, extra = 0;
 int number = 0, size = 0;
 char name[12], sizeName[12];
 
 
 int main ()
 {

//Print option on the screen 1 2 and 3 and save the selection on the variable, if invalid set price to 0
while (scapeValve == 0) 
    {
        printf ("Please select the type of table that you need: \n");
        printf ("\n1 ----- Pine\n");
        printf ("\n2 ----- Oak\n");
        printf ("\n3 ----- Mahogany\n");
        scanf("%d", &number);
       
            if (number != 0 && number >= 1 && number <=3)
            {
                switch (number)
                {
                    case 1 : price = 100; strcpy(name,"Pine"); break;
                    case 2 : price = 225; strcpy(name,"Oak"); break;
                    case 3 : price = 310; strcpy(name,"Mahogany"); break;
                }
                 scapeValve ++;
            } else 
                {
                    price = 0;
                    printf("Please inform a valid number between 1 and 3");  
                    while ( ( ch = getchar() ) != '\n' && ch != EOF );           
                }
    }
 
//Print option to table size large or small. Large add $35, display msg if the size is invalid print a 

    scapeValve = 0;
    while (scapeValve == 0) 
      {
        printf ("What size do you need? \n");
        printf ("\n1 ----- Large\n");
        printf ("\n2 ----- Small\n");
        scanf("%d", &size);
        while ( ( ch = getchar() ) != '\n' && ch != EOF );   

            if (size == 1)
            {
                extra = price +35;
                strcpy(sizeName,"Large");
                scapeValve ++;

            } else if (size == 2)
            {
                extra = price; 
                strcpy(sizeName,"Small");
                scapeValve ++;                                     
            }
            else
//massage and assume price small
            {
               extra = price;
               strcpy(sizeName,"Small");
               scapeValve ++;
               printf ("The selected size is invalid \n");
            }
            printf ("The price for %s table in a %s size is %0.2f\n",name,sizeName,extra);
            while ( ( ch = getchar() ) != '\n' && ch != EOF );
      }

}
