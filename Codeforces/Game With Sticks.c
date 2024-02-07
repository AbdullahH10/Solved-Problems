#include<stdio.h>
int main()
{
    int m,n,c;
    scanf("%d %d",&n,&m);
    if(n<m)
        c=n%2;
    else
        c=m%2;
    if(c!=0)
        printf("Akshat");
    else
        printf("Malvika");
    return 0;
}
