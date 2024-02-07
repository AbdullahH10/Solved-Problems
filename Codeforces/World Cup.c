#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j=0,ar[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0; i<n; i++)
    {
        if(ar[j]==0)
        {
            printf("%d",j+1);
            return 0;
        }
        if(ar[i]!=0)
            ar[i]--;
        if(j<n-1)
            j++;
        else
            j=0;
    }
    return 0;
}
