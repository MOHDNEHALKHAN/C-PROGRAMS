/*PROGRAM USING SWITCH CASE*/

#include<stdio.h>
int main()
{
int floor;
printf("Enter the floor where you want to go:\n");
scanf("%d",&floor);
switch(floor)
{
case 1 :
printf("Welcome to the fruits section");
break;
case 2 :
printf("Welcome to the clothes section");
break;
case 3 :
printf("Welcome to the cinema section");
break;
default :
printf("Please visit again");
}
return 0;
}