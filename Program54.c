/*PROGRAM USING STRINGS HANDLING FUNCTION(strlen)*/

#include<stdio.h>
#include<string.h>
int main()
{
  int len;
  char ch[] = "jaipur is the capital of rajasathan";
   len = strlen(ch);
  printf("string length = %d\n",len);
return 0;
}