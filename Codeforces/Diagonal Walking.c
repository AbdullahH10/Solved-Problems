#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j=0;
    scanf("%d ",&n);
    char st[101],res[101]={};
    gets(st);
    for(i=0;i<n;)
    {
        if(st[i]=='R' && st[i+1]=='U' || st[i]=='U' && st[i+1]=='R')
        {
            res[j]='D';
            j++;
            i=i+2;
        }
        else
        {
            res[j]=st[i];
            //res[j+1]=st[i+1];
            j++;
            i++;
        }
    }
    printf("%d",strlen(res));
    return 0;
}
