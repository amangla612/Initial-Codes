#include <stdio.h>

int main()
{
    int r,c,i,j;
    printf("enter the number of rows and columns");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("%d",(j%2));
        }
        printf("\n");
    }
    return 0;
}
