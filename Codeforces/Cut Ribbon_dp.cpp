#include<bits/stdc++.h>

using namespace std;

vector <int> cuts;
vector <int> pieces(100000,0);
vector <int> res;

void cut_ribbon(int n,int c)
{
    if(n==0)
    {
        ///cout<<"--->"<<c<<endl;
        res.push_back(c);
        return;
    }

    if(pieces[n]>0)
    {
        ///cout<<"here1--->"<<n<<"  "<<c<<endl;
        c=pieces[n];
        return;
    }

    if(pieces[n]==-INT_MAX)
        return;

    if(n<cuts[0])
    {
        ///cout<<"here2--->"<<n<<"  "<<c<<endl;
        if(n>=0)
            pieces[n]=-INT_MAX;
        else
            return;
    }

    ///cout<<"here3--->"<<n<<"  "<<c<<endl;
    pieces[n]=c;
    c++;
    cut_ribbon(n-cuts[0],c);
    cut_ribbon((n-cuts[1]),c);
    cut_ribbon((n-cuts[2]),c);

    return;
}

int main()
{
    int n,i,j;
    cin>>n;

    for(i=0;i<3;i++)
    {
        int x;
        cin>>x;
        cuts.push_back(x);
    }
    sort(cuts.begin(),cuts.end());

    /*for(i=0;i<3;i++)
        cout<<cuts[i]<<endl;*/
    cut_ribbon(n,0);

    sort(res.begin(),res.end());
    reverse(res.begin(),res.end());

    cout<<res[0]<<endl;

    return 0;
}
