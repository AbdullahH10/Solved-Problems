#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100001];
    gets(ar);
    int i=0,c_20=0,c_0=0,c_1=0,c_2=0;
    while(i<strlen(ar))
    {
        if(ar[i]=='2')
        {
            c_2++;
            i++;
        }
        else if(ar[i]=='0')
        {
            c_0++;
            i++;
        }
        else if(ar[i]=='1')
        {
            c_1++;
            i++;
        }
    }
    if(c_2>c_0)
    {
        c_20=c_0;
        c_2-=c_0;
        c_0=0;
    }
    else if(c_2<c_0)
    {
        c_20=c_2;
        c_0-=c_2;
        c_2=0;
    }
    else if(c_0==c_2)
    {
        c_20=c_0;
        c_0=0;
        c_2=0;
    }
    for(i=0;i<c_0;i++)
        printf("0");
    for(i=0;i<c_1;i++)
        printf("1");
    for(i=0;i<c_2;i++)
        printf("2");
    for(i=0;i<c_20;i++)
        printf("20");
    return 0;
}
