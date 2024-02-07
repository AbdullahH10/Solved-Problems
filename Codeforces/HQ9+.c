#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int i,j=0;
    gets(st);
    for(i=0; i<strlen(st); i++)
    {
        if(st[i]=='H' || st[i]=='Q' || st[i]=='9')
        {
            j=1;
            break;
        }
    }
    if(j==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
