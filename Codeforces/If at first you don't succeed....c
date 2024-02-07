#include<stdio.h>
int main()
{
    int a,b,c,n,x,y,z,r;
    scanf("%d %d %d %d",&a,&b,&c,&n);
    x=a-c;
    y=b-c;
    z=x+y+c;
    r=n-z;
    if(a<n && b<n && c<n && a>=c && b>=c && r>=1)
        printf("%d",r);
    else
        printf("-1");
    return 0;
}
