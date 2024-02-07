#include<stdio.h>
int main()
{
    int n,m,i=0,j=0,count=0;
    scanf("%d %d",&n,&m);
    int c[n],a[m];
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    i=0;
    while(j<m)
    {
        if(a[j]>=c[i])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            i++;
        }
        if(i>=n)
            break;
    }
    printf("%d",count);
    return 0;
}
