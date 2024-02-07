#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,pages_turned=0,cur_line=0,n,m,b;
    cin>>n>>m;
    vector <int> ar,res;
    for(i=0;i<n;i++)
    {
        cin>>b;
        ar.push_back(b);
    }
    for(i=0;i<n;i++)
    {
        pages_turned=(cur_line+ar[i])/m;
        res.push_back(pages_turned);
        cur_line=(cur_line+ar[i])%m;
    }
    for(i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
