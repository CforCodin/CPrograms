#include <stdio.h>

int main()
{
    int A[3] = {1,2,3};
    int B[3] = {4,5,6};
    int n,m;
    n=0;
    m =0;
    int ch =0;
    int C[2]={n,m};
    printf("{");
    for(int i = 0 ; i < 3 ; i ++)
    {
        for(int j = 0;j < 3;j++)
        {
            printf(" (%d %d), ", A[i],B[j]);
        }
        
    }
    printf("}");
    return 0;
}
