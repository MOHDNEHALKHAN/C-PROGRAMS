/*WRITE A C PROGRAM TO FIND THE FACTORIAL OF A GIVEN INTEGER NUMBER USING RECURSIVE FUNCTIONS*/

#include<stdio.h>
long int fact(int n);
int main()
{
long int n;
printf("\n Enter an integer no:\n");
scanf("%ld",&n);
printf("factorial of %ld = %ld \n", n, fact(n));
return 0;
}
long int fact(int n)
{
if(n==0)
return 1;
else
return n*fact(n-1);
}