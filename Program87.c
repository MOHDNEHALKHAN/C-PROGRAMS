/*PROGRAM USING NESTING OF MACRO*/

#include <stdio.h>
#define M 5
#define N (M+1)
#define SQUARE(x)((x)*(x))
#define CUBE(x) ((x) * (x) * (x))
#define SIXTH(x)(CUBE(x)*CUBE(x))
int main()
{
   int a=2, b=3 ,c=10 ,sq ,cu , si;
sq = SQUARE(a);
printf("%d\n",sq);
cu = CUBE(b);
printf("%d\n",cu);
si = SIXTH(c); 
printf("%d\n",si);
printf("%d",N);
return 0;
}