#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    int i,j,x,d,ar[m];
    for(i=0;i<m;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ar[j]>ar[j+1])
            {
                x=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=x;
            }
        }
    }
    d=ar[n-1]-ar[0];
    for(i=1;i<m;i++)
    {
        if(i+n-1>m)
            break;
        else if(ar[i+n-1]-ar[i]<d)
            d=ar[i+n-1]-ar[i];
    }
    printf("%d",d);
    return 0;
}
