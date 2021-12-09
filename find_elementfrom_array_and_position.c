#include <stdio.h>

int main()
{
    int arr[100],n,element;
    printf("enter the size of array from size 1-1000 :");
    scanf("%d",&n);
    printf("enter the elements of array :");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the element to search :");
    scanf("%d",&element);
    for(int i=0;i<n;i++){
        if(element==arr[i]){
            printf("%d element is in the array and position of array is %d",element,i);
            return 0;
        }
        
    }
    
        printf("%d element is not in array",element);
    

    return 0;
}
