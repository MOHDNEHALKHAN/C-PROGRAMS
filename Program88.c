/*PROGRAM USING CONDITIONAL COMPILATION*/

#include <stdio.h>
#define x 10
int main()
{
#ifdef x  /*preprocessor directive*/
printf("hello\n");
#else
printf("hi\n");
#endif
return 0;
}