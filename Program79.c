/*WRITE A C PROGRAM – USING STRUCTURES FOR READING THE EMPLOYEE DETAILS LIKE EMPLOYEE NAME, DATE OF JOINING AND SALARY AND ALSO TO COMPUTE TOTAL SALARY OUTGO FOR A MONTH*/

#include<stdio.h>
#include<string.h>
struct Employee
{
char name[20];
int day;
char month[10];
int year;
float salary;
};
int main()
{
struct Employee e[10];
int total_salary=0;
int n,i,t;
char month[10];
printf ("enter number of employees\n");
scanf ("%d",&n);
for (i=1; i<=n; i++)
{
printf("Input Values\n");
scanf("%s %d %s %d %f",e[i].name, &e[i].day, e[i].month, &e[i].year, &e[i].salary);
printf("%s %d %s %d %f\n", e[i].name, e[i].day, e[i].month, e[i].year, e[i].salary);
}
printf("enter the month for total salary\n");
scanf("%s",month);
for(i=1; i<=n; i++)
{
t=strcmp(e[i].month, month);
if(t==0)
total_salary = total_salary + e[i].salary;
}
printf ("The total salary for giving month = %d\n", total_salary);
return 0;
}