/*PROGRAM USING C DOUBLE POINTER*/

#include<stdio.h> 
void main()
{
int a=10; 
int *p;
int **pp;
p = &a;            // pointer p is pointing to the address of a
pp = &p;           // pointer pp is a double pointer pointing to the address of pointer p
printf("address of a: %x\n",p);          // Address of a will be printed 
printf("address of p: %x\n",pp);         // Address of p will be printed 
printf("value stored at p: %d\n",*p);    // value stoted at the address contained by p le. 10 will be printed
printf("value stored at pp: %d\n",*pp);  // value stored at the address contained by the pointer stored at pp
}