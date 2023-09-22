/*PROGRAM USING ALLOCATING MEMORY WITH REALLOC*/

#include<stdio.h>
//To use realloc in our program 
#include<stdlib.h>
int main()
{
int *ptr,i;
//allocating memory for only 1 integer
ptr = malloc(sizeof(int));
ptr[0]=1;
//realloc memory size to store 3 integers
ptr = realloc(ptr,3*sizeof(int));
ptr = realloc(ptr,2*sizeof(int));
  ptr[1]=2;
  ptr[2]=3;
//printing values
for(i=0;i<3;i++)
printf("%d\n",ptr[i]);
return 0;
}