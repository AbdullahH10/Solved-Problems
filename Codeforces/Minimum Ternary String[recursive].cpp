#include<bits/stdc++.h>
using namespace std;
int i,j,k=0,count_0=0,count_1=0,count_2=0,flag=0,f0=0,f1=0,f2=0;
void countn(char *input)
{
    if(k>=strlen(input))
    {
        k=0;
        return;
    }
    else if(input[k]=='1')
    {
        count_1++;
        f1=1;
    }
    else if(input[k]=='0')
    {
        count_0++;
        f0=1;
    }
    else if(input[k]=='2')
    {
        count_2++;
        f2=1;
    }
    k++;
    countn(input);
}
void print(char *input)
{
    if(k>=strlen(input))
    {
        return;
    }
    else if(f2==0)
    {
        sort(input,input+strlen(input));
        puts(input);
        return;
    }
    else if(f0==0 && f2==0 && input[k]=='1')
        printf("%c",'1');
    else if(input[k]=='0')
        printf("%c",input[k]);
    else if(input[k]=='2' && flag==0)
    {
        for(j=0; j<count_1; j++)
            printf("%c",'1');
        printf("%c",input[k]);
        flag=1;
    }
    else if(input[k]=='2')
    {
        printf("%c",input[k]);;
    }
    k++;
    print(input);
}
int main()
{
    char input[100001];
    gets(input);
    countn(input);
    print(input);
    return 0;
}
