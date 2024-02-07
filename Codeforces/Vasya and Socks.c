#include<stdio.h>
int main()
{
    int n,m,i=1,count=0;
    scanf("%d %d",&n,&m);
    while(i<=n)
    {
        if(i%m==0)
            count++;
        if(i==n)
            {
                n=n+count;
                count=0;
            }
        i++;
    }
    printf("%d",n);
    return 0;
}
