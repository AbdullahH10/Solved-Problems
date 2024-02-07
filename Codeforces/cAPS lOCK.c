#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,x;
    char st[100];
    gets(st);
    for(i=0; i<strlen(st); i++)
    {
        if(st[i]>='A' && st[i]<='Z')
        {
            j=1;
        }
        else if(st[i]>='a' && st[i]<='z' && i!=0)
        {
            j=0;
            puts(st);
            return 0;
        }
    }
    if(j==1 && st[0]>='A' && st[0]<='Z')
    {
        strlwr(st);
        puts(st);
        return 0;
    }
    strlwr(st);
    x=st[0];
    x=x-32;
    st[0]=x;
    puts(st);
    return 0;
}
