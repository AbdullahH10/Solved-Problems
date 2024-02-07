#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j=0,k=0,ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    int x=ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]>x)
        {
            x=ar[i];
            j=i;
        }
    }
    //printf("%d\n",j);
    int y=ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]<=y)
        {
            y=ar[i];
            k=i;
        }
    }
    int z=j+(n-k-1);
    if(j>k)
        printf("%d",z-1);
    else
        printf("%d",z);
    //printf("%d\n",n-k-1);
    //printf("%d",j+(n-k-1));
    return 0;
}
