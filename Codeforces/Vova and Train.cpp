#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int ar[t],i,j,L,v,l,r,count=0,k,m,p,q;
    for(j=0; j<t; j++)
    {
        scanf("%d %d %d %d",&L,&v,&l,&r);
        k=L/v;
        p=ceil(r/v);
        q=ceil((l-1)/v);
        m=p-q;
        count=k-m;
        ar[j]=count;
        count=0;
    }
    for(j=0; j<t; j++)
        printf("%d\n",ar[j]);
    return 0;
}
