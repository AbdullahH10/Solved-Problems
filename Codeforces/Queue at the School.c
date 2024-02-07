#include<stdio.h>
#include<string.h>
int main()
{
    int n,t,i,j;
    scanf("%d %d\r",&n,&t);
    char st[n+1],x;
    gets(st);
    for(i=0;i<t;i++)
    {
        j=0;
        while(j<n)
        {
            if(st[j]=='B' && st[j+1]=='G')
            {
                x=st[j];
                st[j]=st[j+1];
                st[j+1]=x;
                j=j+2;
            }
            else
                j++;
        }
    }
    puts(st);
    return 0;
}
