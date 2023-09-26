/*PROGRAM USING C COMMAND LINE ARGUMENT*/

#include<stdio.h>
int main(int argc,char*argv[])
{
for(int i=1; i<argc ;i++)
 {
printf("%s\t",argv[i]);
 }
return 0;
}
