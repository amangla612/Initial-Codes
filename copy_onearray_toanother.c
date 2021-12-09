#include <stdio.h>

int main()
{
    int arr[100],n,element,sum=0,i,count,arr1[100];
    printf("Enter the array from 1-100 :");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr1[i]=arr[i];
    }
    
    
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
