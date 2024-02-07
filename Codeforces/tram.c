#include<stdio.h>
int main()
{
    int x=0,y=0,z=0,i,n;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        y=x;
        x=(b[i]-a[i])+y;
        if(x>z)
            z=x;
    }
    printf("%d",z);
    return 0;
}
