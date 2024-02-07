#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,count=1,x=0,ar[n];
    for(i=0; i<n; i++)
        scanf("%d",&ar[i]);
    for(i=0; i<n-1; i++)
    {
        if(ar[i+1]>=ar[i])
            count++;
        else
        {
            if(count>x)
                x=count;
            count=1;
        }
    //printf("%d\n",count);
    }
    if(x>count)
        printf("%d",x);
    else
        printf("%d",count);
    return 0;
}
