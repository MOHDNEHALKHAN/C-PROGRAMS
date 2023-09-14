/*PROGRAM USING NULL POINTER*/

#include<stdio.h>
int main()
{
int *p, *q; // WILD POINTER
int *a=NULL, *b=NULL;
if(p==q)
{
printf("This will be printed if p and q are same by chance.");
}
if(a==b) // NULL POINTER
{
printf("This will be printed always becauase a and b are same");
}
return 0;
}