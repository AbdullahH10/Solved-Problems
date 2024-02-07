#include<stdio.h>
int main()
{
    int n,i,j,f=0;
    scanf("%d",&n);
    int p;
    scanf("%d",&p);
    int x[p];
    for(i=0; i<p; i++)
        scanf("%d",&x[i]);
    int q;
    scanf("%d",&q);
    int y[q];
    for(i=0; i<q; i++)
        scanf("%d",&y[i]);
    /*for(i=0;i<p;i++)
        printf("%d\t",x[i]);
    printf("\n");
    for(i=0;i<q;i++)
        printf("%d\t",y[i]);
    printf("\n");*/
    if(p==0 && q==0)
    {
        printf("Oh, my keyboard!");
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<p; j++)
        {
            if(x[j]==i)
            {
                //printf("%d true1\n",i);
                f=0;
                break;
            }
            else
            {
                //printf("%d true2\n",i);
                f=1;
            }
        }
        if(f==0)
            continue;
        for(j=0; j<q; j++)
        {
            if(y[j]==i)
            {
                //printf("%d true3\n",i);
                f=0;
                break;
            }
            else
            {
                //printf("%d true4\n",i);
                f=1;
            }

        }
        if(f==1)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}
