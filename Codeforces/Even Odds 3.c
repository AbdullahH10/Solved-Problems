#include<stdio.h>
int main()
{
    long long int n,k,l,j;
    scanf("%lld %lld",&n,&k);
    if(n%2==0)
        l=n/2;
    else
        l=(n+1)/2;
    if(k<=l)
        j=1+(k-1)*2;
    else
        j=2+(k-l-1)*2;
    printf("%lld",j);
    return 0;
}
