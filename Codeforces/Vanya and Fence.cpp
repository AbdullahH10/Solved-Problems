#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int n,h;
    scanf("%d %d",&n,&h);
    int i,ar[n],width=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]>h)
            width=width+2;
        else
            width++;
    }
    printf("%d",width);
    return 0;
}
