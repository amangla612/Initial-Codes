#include <stdio.h>
#include <math.h>

int main()
{
    int arr[]={10,20,30,56,48,52,96};
    int new,i;
    printf("original   new\n");  
    for(i=0;i<7;i++){
    new=arr[i];
    printf("\n%d       %d\n",arr[i],new);
    }
    
    return 0;
}
