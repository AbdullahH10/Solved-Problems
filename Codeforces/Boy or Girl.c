#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=0,flag;
    char un[100];
    gets(un);
    for(i=0;i<strlen(un);i++)
    {
        flag=0;
        for(j=0;j<i;j++)
        {
            if(un[i]==un[j])
                flag=1;
        }
        if(!flag)
        {
            count++;
        }
    }
    if(count%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}
