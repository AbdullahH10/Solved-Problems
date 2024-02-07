#include<stdio.h>
int main()
{
    unsigned long long int n,k;
    scanf("%llu %llu",&n,&k);
    unsigned long long int i=1,j=2,count=0;
    while(i<=n)
    {
        count++;
        printf("%llu\n",i);
        if(count==k)
        {
            printf("%llu",i);
            return 0;
        }
        i=i+2;
    }
    while(j<=n)
    {
        count++;
        printf("%llu\n",j);
        if(count==k)
        {
            printf("%llu",j);
            return 0;
        }
        j=j+2;
    }
    return 0;
}

