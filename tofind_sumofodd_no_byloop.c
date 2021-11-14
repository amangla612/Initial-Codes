#include <stdio.h>

int main()
{
    int num,i,sum=0;
    printf("enter the value from where you want to get sum of odd no:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i % 2 != 0){
            sum=sum+i;
            }
       
    }
    printf("\nthe sum from 1 to %d is %d",num,sum); 
    return 0;
}
