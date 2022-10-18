
#include <stdio.h>

int main()
{
    int flag =0;
    int a[2][2],b[2][2];
    printf("Matrix:");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter element of 1st: ");
            scanf("%d",&a[i][j]);
        }
    }
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter element of 2nd: ");
            scanf("%d",&b[i][j]);
        }
    }
      for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%4d",a[i][j]);
            
        }
        printf("\n");
    }
    
      for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(a[i][j]==b[i][j])
            flag=1;
            else
            {
                flag=0;
                break;
            }
        }
    }
  if(flag==0)
  printf("Unequal");
  else
  printf("Equal");
  
}

