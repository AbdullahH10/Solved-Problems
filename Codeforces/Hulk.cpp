#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0 && i!=n)
        {
            cout<<"I love that ";
        }
        else if(i%2!=0 && i!=n)
        {
            cout<<"I hate that ";
        }
        else if(i%2==0 && i==n)
        {
            cout<<"I love it";
        }
        else if(i%2!=0 && i==n)
        {
            cout<<"I hate it";
        }
    }
}
