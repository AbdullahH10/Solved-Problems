#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,b,r,rem,res,fin;
    cin>>y>>b>>r;
    while(1)
    {
        if((y+1)<=b && (y+2)<=r)
        {
            res=y+(y+1)+(y+2);
            cout<<res<<endl;
            return 0;
        }
        else
        {
            y--;
        }
    }
    return 0;
}
