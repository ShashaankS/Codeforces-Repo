#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int flag=0;
    
    for(int i=1;i<s.length();i++)
    {
        if(s[i]>=97)
        {flag=1;break;}
    }
    if(flag==0 && s[0]<97)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]+=32;
        }
    }
    else if (flag==0 && s[0]>=97)
    {
        s[0]-=32;
        for(int i=1;i<s.length();i++)
        {
            s[i]+=32;
        }
    }
    
    cout<<s<<endl;
    return 0;
}