#include<stdio.h>
#include<string.h>
int main()
{
    char x[101],y[101],r[101];
    gets(x);
    gets(y);
    int i;
    for(i=0;i<strlen(x);i++)
    {
        if(x[i]=='0' && y[i]=='0' || x[i]=='1' && y[i]=='1')
        {
            //printf("true\n");
            r[i]='0';
        }
        else
            r[i]='1';
        //printf("---%c %c %c\n",x[i],y[i],r[i]);
    }
    r[strlen(x)]='\0';
    puts(r);
    return 0;
}
