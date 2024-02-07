#include<stdio.h>
int main()
{
    int n,i,j,x,count=0,sum=0,suma=0,sumb=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        suma+=ar[i];
    }
    for(i=0;i<=n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(ar[j]>ar[j-1])
            {
                x=ar[j];
                ar[j]=ar[j-1];
                ar[j-1]=x;
            }
        }
    }
//    for(i=0;i<n;i++)
//       printf("%d\t",ar[i]);
    for(i=0;i<n;i++)
    {
        sum+=ar[i];
        sumb=suma-sum;
        count++;
        if(sum>sumb)
            break;
    }
    printf("%d",count);
    return 0;
}
