#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,x=0,ar[5];
    ar[0]=100,ar[1]=20,ar[2]=10,ar[3]=5,ar[4]=1;
    for(i=0;i<5;i++)
    {
        if(n>=ar[i])
        {
            //printf("%d---%d--%d-true\n",n,ar[i],x);
            x+=n/ar[i];
            n=n%ar[i];
        }
    }
    printf("%d",x);
    return 0;
}
