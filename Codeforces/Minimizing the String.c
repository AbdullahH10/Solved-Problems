#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d ",&n);
    char st[n+1];
    gets(st);
    for(i=0;i<n;i++)
    {
        if(st[i+1]>=st[i])
            {
                j=i+1;
            }
    }
    for(i=0;i<n;i++)
    {
        if(i==j)
            continue;
        else
            printf("%c",st[i]);
    }
    return 0;
}
