#include<stdio.h>
int main()
{
    int a,b,c,x=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(x<a+b*c)
        x=a+b*c;
    if(x<a*(b+c))
        x=a*(b+c);
    if(x<a*b*c)
        x=a*b*c;
    if(x<(a+b)*c)
        x=(a+b)*c;
    if(x<a+b+c)
        x=a+b+c;
    printf("%d",x);
    return 0;

}
