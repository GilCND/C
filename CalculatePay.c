/*
-------------------------------------------------------------------------------------
PROGRAM INFO:
Program: CalculatePay.c.
Date: 24/01/2020
Autor: Felipe SG
Program Details: create an application that prompts an employee for an hourly pay rate 
and number of hours worked. Compute their gross pay (hours times rate), withholding tax, 
and net pay (gross pay minus withholding tax). Withholding tax is computed as a percentage 
of gross pay based on the following:

Gross Pay ($)                                             Withholding (%)
0 to 300.00                                                  10
300.01 to 400.00                                             12
400.01 to 500.00                                             15
500.01 and over                                              20


-------------------------------------------------------------------------------------
Change log
-------------------------------------------------------------------------------------
|       Date        |   Programmer   |                   Changelog                   | 
    Jan-24-2020         Felipe SG                   First Version  1.0         

*/

 #include <stdio.h>


 int ch;
 float paymentHourly = 0, hoursWorked, grossPay = 0, tax =0, netPay, taxAmopunt = 0;
 int scapeValve =0;

 
 
 int main ()
 {

//prompts an employee for an hourly pay rate and number of hours worked.

while (scapeValve == 0) 
    {
        printf ("Please Inform the hourly payment\n");
        scanf("%f", &paymentHourly);
        if (paymentHourly > 0)
        {
            printf ("Please Inform the amount of hours worked:\n");
            scanf("%f", &hoursWorked);
                //Compute their gross pay (hours times rate)withholding tax, and net pay 
                //(gross pay minus withholding tax).
                if (hoursWorked > 0)
                {
                    grossPay = paymentHourly * hoursWorked;
                    scapeValve = 1;
                        if (grossPay >=0 && grossPay <=300)
                        {
                            tax = 0.10;
                        } 
                        else if (grossPay >300 && grossPay <=400)
                        {
                            tax = 0.12;
                        }
                        else if (grossPay >400 && grossPay <=500)
                        {
                            tax = 0.15;        
                        }
                        else
                        {
                            tax = 0.20;        
                        }
                        taxAmopunt = grossPay * tax;
                        netPay = grossPay - taxAmopunt;
                } 
                else
                {
                    printf ("Please enter a valid data\n");
                    while ( ( ch = getchar() ) != '\n' && ch != EOF );
                }
        } 
        else 
        {
            printf ("Please enter a valid data\n");
            while ( ( ch = getchar() ) != '\n' && ch != EOF );
        }
  
    }
    printf ("Your Gross Payment is: %0.2f, the tax would be: %0.2f, the Net Payment: %0.2f \n",grossPay,taxAmopunt,netPay);
    while ( ( ch = getchar() ) != '\n' && ch != EOF );      
    
}
