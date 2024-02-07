#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int i,j=1,ar[n-1];
    for(i=0;i<n-1;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n-1;i++)
    {
        j=ar[j-1]+j;
        if(j==t)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(j>t)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
