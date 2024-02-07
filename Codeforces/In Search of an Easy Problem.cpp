#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int ar[n];

    int i,j,k,l;

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    sort(ar,ar+n);

    if(ar[n-1]==1)
        cout<<"HARD"<<endl;

    else
        cout<<"EASY"<<endl;

    return 0;
}
