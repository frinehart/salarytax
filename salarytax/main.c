/*
* Author: Francis Rinehart
* Purpose: Calculate Salary Tax
* Language: C
* Last Update: 12/16/2021 at 0:03:04
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary;
    double salary_tax;

    printf("Enter the user's salary: \n");
    scanf("%d", &salary);

    if(salary <= 10000)
    {
        printf("No tax recorded");
    }
    else if(salary > 10000 && salary <= 100000)
    {
        salary_tax = salary*0.10;
        printf("%d", salary_tax);
    }
    else
    {

    }
}
