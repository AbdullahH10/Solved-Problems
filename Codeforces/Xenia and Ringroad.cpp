#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,n,m,time=0,cur=1;
    vector <long long> v;
    vector <long long> :: iterator c;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    i=0;
    while(i<m)
    {
        if(v[i]>cur)
        {
            time+=v[i]-cur;
            cur=v[i];
            ///cout<<"1: "<<time<<endl;
        }
        else if(v[i]<cur)
        {
            time+=(n-cur)+((v[i]-1)+1);
            cur=v[i];
            ///cout<<"2: "<<time<<endl;
        }
        else if(v[i]==cur)
        {
            time+=0;
            ///cout<<"3: "<<time<<endl;
        }
        i++;
    }
    cout<<time<<endl;
    return 0;
}
