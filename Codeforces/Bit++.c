#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,x=0;
    scanf("%d",&n);
    char st[n][3];
    for(i=0;i<=n;i++)
    {
        gets(st[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(st[i][0]=='X')
        {
            if(st[i][1]=='+')
                x++;
            else if(st[i][1]=='-')
                x--;
        }
        else if(st[i][0]=='+')
            ++x;
        else if(st[i][0]=='-')
            --x;
    }
    printf("%d",x);
    return 0;
}
