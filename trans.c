#include <stdio.h>
int main()
{
    int a[2][2],ar[2][2],i,j;
    printf("Enter array:");
    for(i = 0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is\n");
    for(i = 0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    for(i = 0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            ar[i][j]= a[j][i];
        }
    }
    printf("Transpose of matrix\n");
    for(i = 0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%3d",ar[i][j]);
        }
        printf("\n");
    }
     return 0;
}




