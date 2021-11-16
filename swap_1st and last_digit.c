#include <stdio.h>
#include <math.h>
int main() 
{
    int num,nnum,t,count=0;
    printf("Enter number:");
    scanf("%d",&num);
    t=num%10;
    nnum=num-t;
    while(num>10){
        num=num/10;
        count++;
    }
    nnum=nnum+num;
    nnum=nnum-num*pow(10,count);
    nnum=nnum+t*pow(10,count);
    printf(" after Swapping first and last digit: %d",nnum);
    return 0;
}
