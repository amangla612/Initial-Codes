#include <stdio.h>

int main()
{
    int arr[100],n,element;
    printf("enter the size of array from size 1-1000 :");
    scanf("%d",&n);
    printf("enter the elements of array :");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            
            printf(" the -ve elment in array is :%d\n ",arr[i]);
            
        }
        
    }
    

    

    return 0;
}
