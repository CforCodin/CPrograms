#include <stdio.h>
int sym(int a[4][4]);
int main()
{
     int a[4][4] , at[4][4] ,flag=0;
    printf("Enter element of 1st: ");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            
            scanf("%d",&a[i][j]);
            
        }
    }
    
     flag =sym(a);
    if(flag==1)
    printf("Symmetric");
    else
    printf("Unsymmetric");
    return 0;
    
}
int sym(int a[4][4])
{
   int flag=0;
   
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            
            if(a[i][j]==a[j][i])
            flag=1;
            else{
                flag =0;
                break;
            }
        }
    }
       return flag;
}


