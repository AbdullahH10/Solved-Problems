#include<stdio.h>
int prime_check(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x,y;
    for(x=2,y=n-x;x<=n/2;x++,y--)
    {
            if(prime_check(x))
                continue;
            if(prime_check(y))
                continue;
            printf("%d %d",x,y);
            return 0;
    }
}
