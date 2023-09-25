/*PROGRAM USING FTELL() & FSEEK() FUNTION*/

#include<stdio.h> 
int main()
{
FILE *fp;
int position;
fp = fopen ("file.txt", "r");
position = ftell(fp);
printf("Cursor position = %d\n",position);
fseek(fp,50,0);
position - ftell(fp);
printf("Cursor position = %d", position);
fclose(fp);
return 0;
}