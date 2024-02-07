#include<stdio.h>
int main()
{
    unsigned long long int n,k;
    scanf("%llu %llu",&n,&k);
    unsigned long long int i,j,l,ar[n];
    j=0;
    if(n%2==0)
        l=n/2;
    else
        l=(n/2)+1;
    for(i=1;i<=n;i++)
    {
        printf("%llu\n",i);
        if(i%2!=0)
            {
                ar[j]=i;
                j++;
                printf("true1");
            }
        else
            {
                ar[l]=i;
                l++;
                printf("true2");
            }
    }
    printf("%llu",ar[k-1]);
    return 0;
}
