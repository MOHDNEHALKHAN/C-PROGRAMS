/*PROGRAM USING STRINGS HANDLING FUNCTION(strcat)*/

#include<stdio.h>
#include<string.h>
int main()
{
char str1[200] = "welcome in the world of",
str2[] ="c programming language";
// concatinating the str1 and str2
// the resultened will be stored in str1
strcat(str1,str2);
puts(str1);
puts(str2);
return 0;
}