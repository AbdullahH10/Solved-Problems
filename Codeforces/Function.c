#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum+=pow(-1,i)*i;
    }
    printf("%d",sum);
    return 0;
}
