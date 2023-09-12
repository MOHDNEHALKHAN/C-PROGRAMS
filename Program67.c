/*PROGRAM USING POINTER ARITHMETIC(SUBTRACTION)*/

#include<stdio.h>
int main()
{
int number=10; 
int *p;//pointer to int 
p=&number;//stores the address of number variable 
printf("Address of p variable is %u \n",p); 
p=p-3; //adding 3 to pointer variable 
printf("After sutracting 3: Address of p variable is %u",p);
return 0; 
}