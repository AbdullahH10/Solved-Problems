#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,k=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=0;j<m;j++)
                cout<<"#";
            cout<<endl;
        }
        else
        {
            if(k==1)
            {
                cout<<"#";
                for(j=1;j<m;j++)
                    cout<<".";
                cout<<endl;
                k=0;
            }
            else
            {
                for(j=1;j<m;j++)
                    cout<<".";
                cout<<"#"<<endl;
                k=1;
            }
        }
    }
    return 0;
}
