#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin>>input;
    int i=0,j=0,k;
    k=input.size();
    j=k+2;
    for(i=0;i<k;i++)
    {
        if(input[i]=='2')
        {
            j=i;
            break;
        }
        else if(input[i]=='0')
        {
            cout<<'0';
        }
    }
    for(i=0;i<k;i++)
    {
        if(input[i]=='1')
            cout<<'1';
    }
    for(i=j;i<k;i++)
    {
        if(input[i]=='1')
            continue;
        else
            cout<<input[i];
    }
    return 0;
}
