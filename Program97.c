/*PROGRAM USING FTELL(), FSEEK() & REWIND() FUNTION*/

#include<stdio.h> 
int main()
{
FILE *fp;
int position;
fp = fopen ("file.txt", "r");
position = ftell(fp);
printf("Cursor position = %d\n", position);
fseek(fp,5,0);
position = ftell(fp);
printf("Cursor position = %d\n", position);
rewind(fp);
position = ftell(fp);
printf("Cursor position = %d", position);
fclose(fp);
return 0;
}