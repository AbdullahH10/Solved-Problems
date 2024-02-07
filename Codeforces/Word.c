#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    gets(st);
    int i,c_u=0,c_l=0;
    for(i=0;i<strlen(st);i++)
    {
        if(st[i]>='A' && st[i]<='Z')
            c_u++;
        else if(st[i]>='a' && st[i]<='z')
            c_l++;
    }
    if(c_l>=c_u)
        strlwr(st);
    else
        strupr(st);
    puts(st);
    return 0;
}
