#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    char ch[n+1][101];
    for(i=0;i<=n;i++)
    {
        gets(ch[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(strlen(ch[i])>10)
        {
            printf("%c%d%c",ch[i][0],strlen(ch[i])-2,ch[i][strlen(ch[i])-1]);
            printf("\n");
        }
        else
        {
            puts(ch[i]);
            printf("\n");
        }
    }
    return 0;
}
