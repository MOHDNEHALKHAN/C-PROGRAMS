/*PROGRAM USING GOTO*/

#include<stdio.h>
int main()
{
int age;
printf("Enter you age:\n");
scanf("%d",&age);
if(age>=18)
{
goto g; // goto label g
}
else
{
printf("You are not eligible\n");
}
g:
printf("You are not eligible to  cast your vote\n");
return 0;
}
