#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,count;
    char st[100];
    gets(st);
    while(i<strlen(st))
    {
        count=0;
        while(st[i]=='0')
        {
            count++;
            i++;
            if(count>=7)
            {
                printf("YES");
                return 0;
            }
        }
        count=0;
        while(st[i]=='1')
        {
            count++;
            i++;
            if(count>=7)
            {
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}
