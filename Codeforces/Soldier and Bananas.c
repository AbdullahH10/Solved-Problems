#include<stdio.h>
int main()
{
    int k,n,w,x;
    scanf("%d %d %d",&k,&n,&w);
    x=k*(w*(w+1)/2)-n;
    if(x<0)
    {
        printf("0");
        return 0;
    }
    printf("%d",x);
    return 0;
}
