#include<stdio.h>
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,count=0,ar[2*n];
    for(i=0; i<2*n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0; i<2*n; i=i+2)
    {
        if(ar[i]!=ar[i+1])
        {
            for(j=0; j<2*n; j++)
            {
                if(ar[j]==ar[i])
                {
                    while(j!=i+1)
                    {
                        if(j>i+1)
                        {
                            swap(ar[j],ar[j-1]);
                            j--;
                            count++;
                        }
                        else
                        {
                            swap(ar[j],ar[j+1]);
                            j--;
                            count++;
                        }
                    }
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}
