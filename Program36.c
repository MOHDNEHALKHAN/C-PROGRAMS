/*WRITE A C PROGRAM TO FIND THE FACTORIAL OF A GIVEN INTEGER NUMBER USING NON-RECURSIVE FUNCTIONS*/

#include<stdio.h>
int main()
{
int n,i,f;
printf("Enter the number:\n ");
scanf("%d",&n);
f=1;
for(i=1;i<=n;i++)
f=f*i;
printf("Factorial of %d = %d",n,f);
return 0;
}