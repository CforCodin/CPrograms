//Sorting array string- ginrst
#include <stdio.h>
#include<string.h>
void swap(char*,char*);
int main()
{
    char st[10];int i,j;
    printf("Enter a name");
    gets(st);
   
    for(i=0;i<strlen(st)-1;i++)
    {
       for(j=i+1;j<strlen(st);j++)
       
       if(st[i]>st[j])
       swap(&st[i],&st[j]);
    }
    puts(st);
    return 0;
}
void swap(char* a  , char* b)
{
    
    char t;
    t = *a;
    *a = *b;
    *b = t;
}

