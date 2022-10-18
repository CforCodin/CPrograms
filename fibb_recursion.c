
#include <stdio.h>
void call(int,int,int);

int main()
{
    // Fibonacci series through recursion
    int a,b;
    a = 0;
    b = 1;
    printf(" %d ",a);
    printf(" %d ",b);
    call(a,b,10);

    return 0;
}
void call(int a, int b , int n )
{
    int c = a + b;
    printf(" %d ",c);
    n--;
    if(n>0)
    call(b,c,n);
}
