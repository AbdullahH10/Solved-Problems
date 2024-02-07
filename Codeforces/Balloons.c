#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int i,ar[n];
    for(i=0; i<n; i++)
        scanf("%d",&ar[i]);
    if(n==2 && ar[0]==ar[1] || n==1)
    {
        printf("-1");
        return 0;
    }
    else
    {
        for(i=0;i<n-1;i++)
            sum+=ar[i];
        if(sum==ar[n-1])
        {
            printf("%d\n",n-2);
            for(i=0;i<n-2;i++)
                printf("%d ",i+1);
            return 0;
        }
        else
        {
            printf("%d\n",n-1);
            for(i=0;i<n-1;i++)
                printf("%d ",i+1);
            return 0;
        }
    }
}
