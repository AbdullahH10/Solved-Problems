#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,ar[n],count_e=0,count_o=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
            count_e++;
        else
            count_o++;
    }
    //printf("%d %d\n",count_o,count_e);
    if(count_o>count_e)
        for(i=0;i<n;i++)
            if(ar[i]%2==0)
                printf("%d",i+1);
    if(count_e>count_o)
        for(i=0;i<n;i++)
            if(ar[i]%2!=0)
                printf("%d",i+1);
    return 0;
}
