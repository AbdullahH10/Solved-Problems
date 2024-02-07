#include<stdio.h>
int main()
{
    int n,i,j,x,c=0;
    scanf("%d",&n);
    int ar[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&ar[i][j]);
    }
    for(i=0;i<n;i++)
    {
        x=ar[i][1]-ar[i][0];
        if(x>1)
            c++;
//        printf("%d %d\n",x,c);
    }
    printf("%d",c);
    return 0;
}
