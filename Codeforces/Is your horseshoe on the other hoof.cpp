#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int i,j,s[4],ntb=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<4;i++)
    {
        if(s[i]<0)
            continue;
        for(j=0;j<4;j++)
        {
            if(s[i]==s[j] && i!=j)
            {
                ntb++;
                s[j]=-1;
            }
            if(ntb>=3)
                break;
        }
        if(ntb>=3)
            break;
    }
    printf("%d",ntb);
    return 0;
}
