#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,temp,ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",ar[i]);
    return 0;
}
