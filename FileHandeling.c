#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char k;
    char st[10];
    FILE *fp, *fc;
    
    fc = fopen("a.txt","r");
    fp = fopen("x.txt","w");
    k = fgetc(fc);
    while(!feof(fc))
    {
        strncat(st,&k,1);
        printf("%c",k);
        k = fgetc(fc);
    }
    for(i=0;i<strlen(st);i++)
    {
        fputc(st[i],fp);
    }
    fclose(fp);
    fclose(fc);
    return 0;
}
