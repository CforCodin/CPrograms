/******************************************************************************

Deletion in array

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100];
    int size,nz;
    int end = 0;
    int temp;
    int i,pos;
    nz = 0;
    printf("Enter Size of your array which should be less than 50: \n");
    scanf("%d",&size);
    printf("Enter elements to array: \n");
    for(int i =0; i<size;i++)
         scanf("%d",&a[i]);
    printf("Deleting 1st element: \n");
    for(int i = 0; i<size;i++)
    {
        a[i] = a[i+1];
    }
    printf("New array : \n");
    for(int i = 0; i < size-1;i++)
          printf("%d ",a[i]);
    size--;
    printf("Deleting last element: \n");
    size--;
    printf("New array : \n");
    for(int i = 0 ; i <size ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nDeleting element at some position: \n");
    printf("Enter position: \n");
    scanf("%d", &pos);
    for(int i = pos;i<size;i++)
    {
        a[i] = a[i+1];
    }
    printf("New array: \n");
    size--;
    for(int i = 0 ; i <size ; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}




