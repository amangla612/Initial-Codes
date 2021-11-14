#include <stdio.h>
int main()
{
    int n,i,t;
    printf("enter the value in no :");
    scanf("%d",&n);
    i=n;
    t=0;
    while(i>0){
       t++;
        i /=10;
    }
    printf("no of digit is %d of %d",t,n);
    return 0;
}
