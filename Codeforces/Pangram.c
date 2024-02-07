#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,f=0;
    scanf("%d\r",&n);
    char st[n],i,j;
    gets(st);
    for(i='a',j='A';i<='z';i++,j++)
    {
        for(k=0;k<n;k++)
        {
            if(st[k]==i || st[k]==j)
            {
                f=1;
                break;
            }
            else
                f=0;
        }
        if(f==0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
