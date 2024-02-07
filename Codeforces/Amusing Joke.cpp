#include<bits/stdc++.h>
using namespace std;
int main()
{
    char host[10001]={},guest[10001]={},pile[10001]={},temp[10001]={};
    gets(host);
    gets(guest);
    gets(pile);
    strcpy(temp,host);
    strcat(temp,guest);
    if(strlen(pile)>=(strlen(host)+strlen(guest)))
    {
        std::sort(pile,pile+strlen(pile));
        std::sort(temp,temp+strlen(temp));
        if(strcmp(pile,temp)==0)
            printf("YES");
        else
            printf("NO");
    }
    else
        printf("NO");
    return 0;
}
