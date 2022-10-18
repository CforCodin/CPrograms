#include <stdio.h>
int sum(int);
int main()
{
    int n,sums;
    printf("Enter a number");
    scanf("%d",&n);
    sums = sum(n);
    printf("Sum of digits %d",sums);
    return 0;
}
int sum(int a)
{ int r;
    if(a>0)
    {
       r=a%10;
       return(r+sum(a/10));
    }
    else
    {
        return 0;
    }
}
