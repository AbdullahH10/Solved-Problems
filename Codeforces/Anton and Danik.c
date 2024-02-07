#include<stdio.h>
int main()
{
    int n;
    scanf("%d\r",&n);
    char st[n];
    gets(st);
    int i,count_A=0,count_D=0;
    for(i=0;i<n;i++)
    {
        if(st[i]=='A')
            count_A++;
        else if(st[i]=='D')
            count_D++;
    }
    if(count_A>count_D)
        printf("Anton");
    else if(count_D>count_A)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}
