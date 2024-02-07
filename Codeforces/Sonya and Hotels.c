#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d %d",&n,&d);
    int i,ar[n],j,x,f=0,count=0;
    for(i=0; i<n; i++)
        scanf("%d",&ar[i]);
    for(j=-1000000000; j<=1000000000; j++)
    {
        for(i=0; i<n; i++)
        {
            if(j>ar[i])
            {
                if(j-ar[i]>=d)
                    {
                        f=0;
                        printf("true--%d--%d\n",j,ar[i]);
                    }
                else
                {
                    f=1;
                    break;
                }
            }
            else if(ar[i]>j)
            {
                if(ar[i]-j>=d)
                    {
                        f=0;
                        printf("true--%d--%d\n",j,ar[i]);
                    }
                else
                {
                    f=1;
                    break;
                }
            }
        }
        if(f=0)
            count++;
    }
    printf("%d",count);
    return 0;
}
