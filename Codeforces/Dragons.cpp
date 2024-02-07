#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <pair <int,int> > v;
    int s,n,i,j,k,p,q;
    cin>>s>>n;
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        v.push_back(make_pair(p,q));
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if(v[i].first<s)
            s+=v[i].second;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
