#include<stdio.h>
#include<string.h>
int main()
{
    char st[100],st2[100];
    gets(st);
    gets(st2);
    strlwr(st);
    strlwr(st2);
    printf("%d",strcmp(st,st2));
    return 0;
}
