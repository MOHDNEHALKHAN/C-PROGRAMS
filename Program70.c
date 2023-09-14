/*PROGRAM USING WILD POINTER*/

#include<stdio.h>
int main()
{
int a=60;
int* ptr; // WILD POINTER-NOT INITIALIZE THE POINTER
printf("%u\n", &a);
printf("%u\n", ptr);  
printf("%u\n", *ptr);
ptr=&a;
printf("%u\n", ptr);
printf("%u\n", *ptr);
return 0;
}