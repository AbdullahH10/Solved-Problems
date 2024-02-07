#include<stdio.h>
#include<string.h>
int main()
{
    char st[100001],st2[100001],ar[100][100]={};
    gets(st);
    gets(st2);
    int x=0,i,j=0,k=0;
    if(strcmp(st,st2)==0)
    {
        printf("-1");
        return 0;
    }
    if(strlen(st)>strlen(st2))
    {
        for(i=0; i<strlen(st2); i++)
        {
            if(st[i]!=st2[i])
            {
                ar[j][k]=st[i];
                k++;
            }
            else if(st[i]==st2[i] && j!=0)
            {
                j++;
                k=0;
            }
        }
        if(j!=0)
            j++;
        k=0;
        for(i=strlen(st2);i<strlen(st);i++)
        {
            ar[j][k]=st[i];
        }
    }
    else if(strlen(st2)>=strlen(st))
    {
        for(i=0; i<strlen(st); i++)
        {
            if(st[i]!=st2[i])
            {
                ar[j][k]=st2[i];
                printf("%c\n",ar[j][k]);
                k++;
            }
            else if(st[i]==st2[i] && j!=0)
            {
                j++;
                k=0;
            }
        }
        if(j!=0)
            j++;
        k=0;
        for(i=strlen(st);i<strlen(st2);i++)
        {
            ar[j][k]=st2[i];
        }
    }
    if(ar[0][0]=='\0')
        printf("-1");
    else
    {
        for(i=0;i<=100;i++)
        {
            if(strlen(ar[i])>x)
                x=strlen(ar[i]);
            printf("%s***%d\n",ar[i],x);
        }
        printf("%d",x);
    }
    return 0;
}
