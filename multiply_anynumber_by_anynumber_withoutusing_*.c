#include <stdio.h>

int main()
{
   int num;
   int prod = 0,i;
   printf("Enter  number \n");
   scanf("%d",&num);
   for(i = 1; i <= num; i++){
   prod += 15;
   }
   printf("Multiplication of  number with 15 is %d",prod);
   return 0;
}
