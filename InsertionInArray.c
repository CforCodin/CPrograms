/******************************************************************************

Array Implimentation

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
    //Inserting elements to the array:
    printf("Insert elements to your array at the 1st position \n");
    if(end==-1)
    {
        scanf("%d",&a[0]);
        end++;
    }
    else
    {
        for(i =size;i>0;i--)
        {
            a[i] = a[i-1];
        }
        scanf("%d",&a[i]);
    }
    printf("Your array is:");
    for(int i = 0 ;i<size+1;i++)
    {
        printf("%d ",a[i]);
        nz++;
    }
    
    //Insering at last :
    printf("\nInsering at last\n");
    scanf("%d",&a[nz]);
    printf("Your new array :\n");
    for(int i = 0;i<nz+1;i++)
    printf("%d ",a[i]);
    nz = nz+1;
    //Insering element at any postion:
    printf("\nEnter postion :");
    scanf("%d",&pos);
    printf("Enter element: \n");
    for(i = nz ; i > pos ;i--)
       a[i] = a[i-1];
    scanf("%d",&a[i]);
    for(int i = 0;i<nz+1;i++)
    printf("%d ",a[i]);
    
    return 0;
}
