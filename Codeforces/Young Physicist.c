#include<stdio.h>
int main()
{
    int n,i,j,sumx=0,sumy=0,sumz=0;
    scanf("%d",&n);
    int ar[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sumx+=ar[i][0];
        sumy+=ar[i][1];
        sumz+=ar[i][2];
    }
    if(sumx==0 && sumy==0 && sumz==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
