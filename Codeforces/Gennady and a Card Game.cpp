#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ct[2];
    gets(ct);
    char ch[15];
    int i,j,k;
    printf("\r");
    gets(ch);
    for(i=0;i<15;i=i+3)
    {
        if(ch[i]==ct[0])
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(ch[i+1]==ct[1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
