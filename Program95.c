/*PROGRAM USING FGETC() FUNTION(READ MODE)*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch, file_name[25];
FILE *fp;

printf("Enter name of a file you wish to see\n"); 
gets(file_name);

fp = fopen(file_name, "r"); // read mode
if (fp == NULL)
{
printf("File does not exist\n");
exit(0);
}
printf("The contents of %s file are:\n", file_name);
while((ch = fgetc(fp))!= EOF)
printf("%c", ch);
fclose(fp);
return 0;
}