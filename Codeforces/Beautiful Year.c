#include<stdio.h>
int main()
{
    int n,i,x,ar[4];
    scanf("%d",&n);
    while(1)
    {
        n++;
        x=n;
        for(i=0;i<4;i++)
        {
            ar[i]=x%10;
            x=x/10;
        }
        if(ar[0]!=ar[1] && ar[0]!=ar[2] && ar[0]!=ar[3] && ar[1]!=ar[2] && ar[1]!=ar[3] && ar[2]!=ar[3])
        {
            printf("%d",n);
            return 0;
        }
    }
}
