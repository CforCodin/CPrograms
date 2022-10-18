
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20], c[20];
    char s;
    int i;
    gets(ch);
    printf("This is my name \n");
    puts(ch);
    printf("And I am going to reverse it \n");
    for(i = strlen(ch);i>0;i--)
    {
      char s = ch[i];
      strcat(c,s);
    }
    printf("New String %s",c);

    return 0;
}
