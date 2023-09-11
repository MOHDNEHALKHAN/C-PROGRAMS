/*PROGRAM USING POINTER TO STRINGS*/

#include<stdio.h>
int main()
{
char str[6]="Hello";
char*ptr;
int i;
//string name itself a base address of the string
ptr = str; //ptr references str
for(i = 0; *ptr!= '\0'; ptr++) 
printf("%d\n", *ptr);
return 0;
}