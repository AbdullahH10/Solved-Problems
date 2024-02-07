#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int i,j,k,l,m,n;
    gets(st);
    for(i=0; i<strlen(st); i++)
    {
        if(st[i]=='h')
        {
            j=1;
            break;
        }
        else
            j=0;
    }
    //printf("%d %d\n",i,j);
    for(i=i+1; i<strlen(st); i++)
    {
        if(st[i]=='e')
        {
            k=1;
            break;
        }
        else
            k=0;
    }
    //printf("%d %d\n",i,j);
    for(i=i+1; i<strlen(st); i++)
    {
        if(st[i]=='l')
        {
            l=1;
            break;
        }
        else
            l=0;
    }
    //printf("%d %d\n",i,j);
    for(i=i+1; i<strlen(st); i++)
    {
        if(st[i]=='l')
        {
            m=1;
            break;
        }
        else
            m=0;

    }
    //printf("%d %d\n",i,j);
    for(i=i+1; i<strlen(st); i++)
    {
        if(st[i]=='o')
        {
            n=1;
            break;
        }
        else
            n=0;
    }
    //printf("%d %d\n",i,j);
    if(j==1 && k==1 && l==1 && m==1 && n==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
