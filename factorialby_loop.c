#include <stdio.h>

int main()
{
    int num,i=1,fact=1;
    printf("enter the no");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
        }
    printf("your factorial of %d  is %d",num,fact);
    return 0;
}
