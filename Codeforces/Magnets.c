#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int i,ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        if(ar[i]!=ar[i+1])
            count++;
    }
    printf("%d",count);
    return 0;
}
