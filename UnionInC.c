/******************************************************************************

Union in C

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A[100], B[100], C[100];
    int s1,s2,index=0;
    printf("Enter size of set 1 \n");
    scanf("%d",&s1);
    printf("Enter element of set \n");
    for(int i =0;i < s1;i++)
    {
        scanf("%d",&A[i]);
        C[i] = A[i];
        index++;
    }
    printf("Enter size of set 2 \n");
    scanf("%d",&s2);
    printf("Enter element of set \n");
    for(int i =0;i < s2;i++)
    {
        scanf("%d",&B[i]);
        C[index] = B[i];
        index++;
    }
      for(int i = 0;i < index ;i++)
    {
        
        for(int j= i+1;j< index;j++)
        {
            if(C[i]==C[j])
            {
            
            for(int k = j;k < index;k++)
            {
                C[k] = C[k+1];
                
            }
            index--;
            }
        }
        
    }
    
    printf("\nArray A: \n");
    for(int i = 0; i < s1 ;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nArray B: \n");
    for(int i = 0; i < s2 ;i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n A Union B :");
    for(int i = 0; i < index ;i++)
    {
        printf("%d ", C[i]);
    }
}
