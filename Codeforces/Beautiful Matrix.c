#include<stdio.h>
int main()
{
    int i,j,x,y,mat[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(mat[i][j]==1)
            {
                x=i-2;
                y=j-2;
                if(x<0)
                    x=x*-1;
                if(y<0)
                    y=y*-1;
                printf("%d",x+y);
                return 0;
            }
        }
    }
}
