#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x;
    char st[100];
    gets(st);
    for(i=0;i<strlen(st)-1;i=i+2)
    {
        for(j=0;j<strlen(st)-1;j=j+2)
        {
            if(st[j]>st[j+2])
            {
                x=st[j];
                st[j]=st[j+2];
                st[j+2]=x;
            }
        }
    }
    puts(st);
    return 0;
}
