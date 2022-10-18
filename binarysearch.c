
#include <stdio.h>

int main()
{
    
    int a[50];
    int n,f,ch,ln,gn,mn;
    ch=0;
    printf("Input number of elements:");
    scanf("%d",&n);
    printf("Enter elements :- ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    printf("Elements are --> \n");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
        
    }
    printf("\n Elements to be searched --> \n");
    scanf("%d",&f);
    ln = 0;
    gn = n-1;
    mn = (ln + gn)/2;
    while(ln<=gn)
    {
        mn = (ln + gn)/2;
        if(a[mn]>f)
        {
            ln = 0;
            gn = mn;
        }
        else if(a[mn]<f)
        {
            ln = mn;
            
        }
        else if(a[mn]==f)
        {
        printf("Element found at %d position ", mn+1);
        break;
        }
            
        
    }
    return 0;
}

