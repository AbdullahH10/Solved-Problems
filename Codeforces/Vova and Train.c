#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int ar[t],i,j,L,v,l,r,count=0;
    for(j=0;j<t;j++)
    {
        scanf("%d %d %d %d",&L,&v,&l,&r);
        for(i=v;i<=L;i=i+v)
        {
            if(i>=l && i<=r)
                continue;
            else
                count++;
        }
        ar[j]=count;
        count=0;
    }
    for(j=0;j<t;j++)
        printf("%d\n",ar[j]);
    return 0;
}
