#include<stdio.h>
int main()
{
    int v[5],i,j=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&v[i]);
    }
    for(i=1;i<=v[4];i++)
    {
        if(v[4]<v[0] && v[4]<v[1] || v[4]<v[2] || v[4]<v[3])
        {
            printf("0");
            return 0;
        }
        else if(i%v[0]==0 || i%v[1]==0 || i%v[2]==0 || i%v[3]==0)
            j++;
        //printf("%d %d\n",i,j);
    }
    printf("%d",j);
    return 0;
}
