#include<stdio.h>
#include<math.h>
int sum(int x)
{
    int y,sum=0;
    while(x>0)
    {
        y=x%10;
        x=x/10;
        sum+=y;
    }
    return sum;
}
int main()
{
    long long int a,b,c,x,r,z,count=0;
    scanf("%d %d %d",&a,&b,&c);
    for(x=1;x<1000000000;x++)
    {
        r=sum(x);
        z=(b*pow(r,a))+c;
        if(z==x)
            count++;
    }
    printf("%lld",count);
    return 0;
}
