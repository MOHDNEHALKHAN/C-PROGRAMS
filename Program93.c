/*PROGRAM USING FPRINTF() FUNCTION*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE*fptr;
fptr=fopen("ABC.txt","w");
printf("%u\n",fptr);
fprintf(fptr,"We are working file handling operation");
fclose(fptr);
}