#include<stdio.h>
int main()
{
    int i,j,a,b,year=0;
    scanf("%d %d",&a,&b);
    while(a<=b)
    {
        a*=3;
        b*=2;
        year++;
    }
    printf("%d",year);
    return 0;
}
