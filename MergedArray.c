/******************************************************************************

Merging 2 arrays

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A[100], B[100], C[100];
    int s1,s2,index=0;
    printf("Enter size of array 1 \n");
    scanf("%d",&s1);
    printf("Enter element of array \n");
    for(int i =0;i < s1;i++)
    {
        scanf("%d",&A[i]);
        C[i] = A[i];
        index++;
    }
    printf("Enter size of array 2 \n");
    scanf("%d",&s2);
    printf("Enter element of array \n");
    for(int i =0;i < s2;i++)
    {
        scanf("%d",&B[i]);
        C[index] = B[i];
        index++;
    }
    printf("\nArray 1: \n");
    for(int i = 0; i < s1 ;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nArray 2: \n");
    for(int i = 0; i < s2 ;i++)
    {
        printf("%d ",B[i]);
    }
    printf("\nMerged array :");
    for(int i = 0; i < index ;i++)
    {
        printf("%d ",C[i]);
    }
    
    
    
    

    return 0;
}
