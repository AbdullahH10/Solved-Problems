#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int ar[n],ar2[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==ar[j])
                ar2[i-1]=j+1;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",ar2[i]);
    return 0;
}
