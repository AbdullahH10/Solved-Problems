#include<stdio.h>
#include<string.h>
int main()
{
    char st[1001],j;
    gets(st);
    int i,count=0;
    for(j='a'; j<='z'; j++)
        for(i=0; i<strlen(st); i++)
        {
            if(st[i]==j)
            {
                count++;
                break;
            }
            //printf("%c %c %d\n",j,st[i],count);
        }
    printf("%d",count);
    return 0;
}
