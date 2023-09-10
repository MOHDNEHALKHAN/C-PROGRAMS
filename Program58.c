/*PROGRAM USING STRINGS HANDLING FUNCTION(strcpy)*/

#include<stdio.h>
#include<string.h>
int main()
{
     char s1[30] ="Chennai";
     char s2[30] ="Tamilnadu";
/*this function has copied s2 into s1*/
  strcpy(s1,s2);
   printf("String s1 is: %s", s1);     
return 0;
}