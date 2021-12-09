#include <stdio.h>

int main()
{
    int arr[100],n,element,f,i;
    printf("Enter the array from 1-100 :");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    f=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<f){
            f=arr[i];
            
        }
    }
    printf("the  smallest element in array is %d :",f);

    return 0;
}
