#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j=0;
    gets(str);
    strlwr(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='y' || str[i]=='Y')
        {
            str[i]=1;
        }
        else
        {
            continue;
        }
    }
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=1)
        {
            printf(".%c",str[i]);
        }
        else
            continue;
    }
    return 0;
}
