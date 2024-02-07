#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    int i,j,x,ar[m];
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
    if(n==2)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                if(ar[i]==ar[j] && i!=j)
                {
                    printf("0");
                    return 0;
                }
            }
        }
    }
    printf("%d",ar[n-1]-ar[0]);
    return 0;
}
