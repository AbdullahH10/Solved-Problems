#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,count=0,ar[n][2];
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            scanf("%d",&ar[i][j]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
            if(i==j)
                continue;
            if(ar[i][0]==ar[j][1] && ar[i][1]==ar[j][0])
                {
                    count=count+2;
                    //printf("---%d %d\n+++%d %d\n***%d\n",ar[i][0],ar[i][1],ar[j][0],ar[j][1],count);
                }
            else if(ar[i][0]==ar[j][1] || ar[i][1]==ar[j][0])
                {
                    count++;
                    //printf("---%d %d\n+++%d %d\n***%d\n",ar[i][0],ar[i][1],ar[j][0],ar[j][1],count);
                }
        }
    printf("%d",count);
    return 0;
}
