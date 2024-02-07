#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10001]={};
    gets(str);
    double len,row,col,x,y,z,s,r,t,t2;
    int i=0,j=0,flag=0;
    len=strlen(str);
    for(x=1;x<=5;x++)
    {
        t=len/x;
        t2=floor(len/x);
        if((t-t2)!=0 && len>20)
            r=1-(t-t2);
        else if((t-t2)==0)
            r=0;
        col=ceil(len/x);
        s=(r*x);
        if(col<=20)
        {
            break;
        }
    }
    //cout<<len<<" "<<s<<" "<<r<<" "<<t<<" "<<t2<<endl;
    cout<<x<<" "<<col<<endl;
    for(y=0;y<x;y++)
    {
        for(z=0;z<col;z++)
        {
            if(j<s && flag!=1)
            {
                cout<<"*";
                j++;
                flag=1;
                continue;
            }
            cout<<str[i];
            i++;
        }
        flag=0;
        cout<<endl;
    }
    return 0;
}
