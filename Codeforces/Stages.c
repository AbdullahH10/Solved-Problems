#include<stdio.h>
#include<string.h>
#include<string.h>
int main()
{
    int n,k,sum=0;
    scanf("%d %d",&n,&k);
    char ar[n+1],ar2[k+1],i;
    scanf(" %s",ar);
    int j,t=0;
    for(j=0; j<n; j++)
    {
        for(t=0; t<n-1; t++)
        {
            if(ar[t]>ar[t+1])
            {
                char temp=ar[t];
                ar[t]=ar[t+1];
                ar[t+1]=temp;
            }
        }
    }
    ar2[0]=ar[0];
    t=0;
    for(j=0; j<n; j++)
    {
        if(ar[j]>ar2[t]+1)
        {
            ar2[t+1]=ar[j];
            t++;
        }
    }
    ar2[t+1]='\0';
    if(strlen(ar2)<k)
    {
        printf("-1");
        return 0;
    }
    for(j=0; j<k; j++)
    {
            int x;
            x=ar2[j];
           // printf("%c**%d**%d\n",ar2[j],x,x-96);
            sum+=(x-96);
    }
    printf("%d",sum);
    return 0;
}
