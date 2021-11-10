#include <stdio.h>

int main()
{
    int n1,n2,n3,i,hcf;
    printf("enter 1st number");
    scanf("%d",&n1);
    printf("enter 1st number");
    scanf("%d",&n2);
    printf("enter 1st number");
    scanf("%d",&n3);
    for(i=1 ; i <= n1 || i <= n2 || i <= n3 ;i++){
        if(n1%i == 0 && n2%i == 0 && n3%i ==0)
        hcf=i;
        
    }
    printf("the hcf of %d is",hcf );

    return 0;
}
