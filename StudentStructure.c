/*
-------------------------------------------------------------------------------------
PROGRAM INFO:
Program: StudentStructure.c
Date: 12/02/2020
Autor: Felipe SG
Program Details: Create a program where you define a ‘Student’ structure to represent 
a student’s name, id and grades for C, SAAD, OOP, COMM, APPD, JS. Declare an array of 
5 ‘Students’ and initialize them within your program. Loop through the array and display 
the student’s information as well as their average for the 6 courses.
-------------------------------------------------------------------------------------
Change-log
-------------------------------------------------------------------------------------
|       Date        |   Programmer   |                   Changelog                   | 
    Feb-12-2020         Felipe SG                   First Version  1.0         
*/

#include <stdio.h>
#include <string.h>

    struct Student
    {
        char Name[10];
        int Id;
        int gradeC;
        int gradeSAAD;
        int gradeOOP;
        int gradeCOMM;
        int gradeAPPD;
        int gradeJS;
    };


int main ()
{

    struct Student Names[5];
        strcpy(Names[0].Name, "Felipe");
        Names[0].Id = 5;
        Names[0].gradeC = 35;
        Names[0].gradeSAAD = 55;
        Names[0].gradeOOP = 61;
        Names[0].gradeCOMM = 68;
        Names[0].gradeAPPD = 85;
        Names[0].gradeJS = 99;
        strcpy(Names[1].Name, "Joe");
        Names[1].Id = 8;
        Names[1].gradeC = 60;
        Names[1].gradeSAAD = 50;
        Names[1].gradeOOP = 69;
        Names[1].gradeCOMM = 69;
        Names[1].gradeAPPD = 69;
        Names[1].gradeJS = 15;
        strcpy(Names[2].Name, "Mitchell");
        Names[2].Id = 82;
        Names[2].gradeC = 62;
        Names[2].gradeSAAD = 52;
        Names[2].gradeOOP = 72;
        Names[2].gradeCOMM = 72;
        Names[2].gradeAPPD = 92;
        Names[2].gradeJS = 28;
        strcpy(Names[3].Name, "Will");
        Names[3].Id = 100;
        Names[3].gradeC = 100;
        Names[3].gradeSAAD = 99;
        Names[3].gradeOOP = 100;
        Names[3].gradeCOMM = 100;
        Names[3].gradeAPPD = 100;
        Names[3].gradeJS = 50;
        strcpy(Names[4].Name, "Rita");
        Names[4].Id = 25;
        Names[4].gradeC = 26;
        Names[4].gradeSAAD = 27;
        Names[4].gradeOOP = 28;
        Names[4].gradeCOMM = 29;
        Names[4].gradeAPPD = 29;
        Names[4].gradeJS = 22;
        
            for (int x = 0; x < 5; x++)
        {
            printf("\n------------------------");
            printf("\nName: %s",Names[x].Name);
            printf("\nId : %i",Names[x].Id);
            printf("\nGrade in C: %i",Names[x].gradeC);
            printf("\nGrade in SAAD: %i",Names[x].gradeSAAD);
            printf("\nGrade in OOP: %i",Names[x].gradeOOP);
            printf("\nGrade in COMM: %i",Names[x].gradeCOMM);
            printf("\nGrade in APPD: %i",Names[x].gradeAPPD);
            printf("\nGrade in JS: %i",Names[x].gradeJS);

        }




    return 0;
}
