#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n;
    double sum=0.0,res;
    cin>>n;
    double ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=ar[i]/100;
        ///cout<<sum<<endl;
    }
    ///cout<<sum<<endl;
    res=(sum/n)*100;
    cout<<res<<endl;
    return 0;
}
