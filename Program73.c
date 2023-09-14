/*PROGRAM USING DANGLING POINTER*/

#include<stdio.h>
int main()
{
int a=10;
int* p=NULL; 
printf("%u\n",&a);
{
        int b=20;
        printf("%u\n",&b);
        p=&b;
        printf("%u\n",p);
        printf("%u\n",p); 
}
printf("%u\n",*p);
return 0;
}
