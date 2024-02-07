#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,ar[n],j,temp;
    for(i=0; i<n; i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    float r,sum=0.0;
    int count=0;
    while(1)
    {
        sum=0;
        for(i=0; i<n; i++)
            sum+=ar[i];
        r=sum/n;
        //printf("%f\n",r);
        if(r<4.5)
        {
            for(i=0; i<n; i++)
            {
                if(ar[i]!=5)
                {
                    ar[i]=5;
                    count++;
                    break;
                }
            }
        }
        else
            break;
    }
    printf("%d",count);
    return 0;
}
