/******************************************************************************

Delete multiple frequency

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[100];
    int size,f=1;
    printf("Enter size of array: \n");
    scanf("%d",&size);
    printf("Enter elements of array: \n");
    for(int i =0 ; i< size;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i = 0;i < size ;i++)
    {
        f = 1;
        for(int j= i+1;j< size;j++)
        {
            if(A[i]==A[j])
            {
            f++;
            for(int k = j;k < size;k++)
            {
                A[k] = A[k+1];
                
            }
            size--;
            }
        }
        
    }
    for(int i = 0;i <size;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
