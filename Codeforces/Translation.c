#include<stdio.h>
#include<string.h>
int main()
{
    char st[100],st2[100];
    gets(st);
    gets(st2);
    int i,n;
    n=strlen(st2)-1;
    for(i=0;i<strlen(st);i++)
    {
        if(st[i]==st2[n-i])
            continue;
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
