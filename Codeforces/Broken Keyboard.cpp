#include<bits/stdc++.h>

using namespace std;

string remove_repeat(string str)
{
    char temp[10000]={};
    int j=0;
    temp[0]=str[0];
    for(int i=1;i<str.size();i++)
    {
        if(temp[j]!=str[i])
        {
            temp[j+1]=str[i];
            j++;
        }
    }
    return temp;
}
int main()
{
    int t;
    vector <string> v;
    vector <string> :: iterator it;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s=" ";
        cin>>s;

        for(int j=0;j<s.size();j++)
        {
            if(s[j]==s[j+1])
            {
                s[j]=' ';
                s[j+1]=' ';
                j++;
            }
        }
        sort(s.begin(),s.end());
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        s=remove_repeat(s);
        v.push_back(s);
    }

    for(int i=0;i<t;i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}
