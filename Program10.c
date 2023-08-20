/*PROGRAM USING CONDITIONAL OPERATORS*/

#include<stdio.h>
int main()
{
int age; //variable declaration
printf("Enter Your Age");
scanf("%d",&age);
(age>=18)?(printf("Eligible for voting")):(printf("Not eligible for voting"));
return 0;
}