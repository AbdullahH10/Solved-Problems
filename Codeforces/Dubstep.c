#include<stdio.h>
#include<string.h>
int main()
{
    char st[200];
    gets(st);
    int i=0,flag=0;
    while(i<strlen(st))
    {
        if(st[i]=='W' && st[i+1]=='U' && st[i+2]=='B')
        {
            if(flag!=0)
            printf(" ");
            i=i+3;
        }
        else
        {
            //printf("TRUE\n");
            printf("%c",st[i]);
            flag=1;
            i++;
        }
    }
    return 0;
}
