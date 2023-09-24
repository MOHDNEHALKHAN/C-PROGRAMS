/*PROGRAM USING FSCANF() FUNCTION*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE*fptr;
char str[100];
fptr=fopen("ABC.txt","r");
printf("%p\n",fptr);
do
{
fscanf(fptr,"%s",str);
printf("%s",str);
}while(!feof(fptr));
fclose(fptr);
return 0;
}