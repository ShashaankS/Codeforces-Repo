using lli=long long int;
using ll= long long;
using ull=unsigned long long;
#define fori for(ll i=0; i<n; i++)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        string x;
        cin>>x;
        string a="";
        string b="";
        fori{
            if(x[i]=='2')
            {
                if(a==""){a+='1';b+='1';continue;}

                if(a>b)
                {a+='0';b+='2';}
                else if(a<b)
                {a+='2';b+='0';}
                else
                {a+='1';b+='1';}
                // a+='1';b+='1';
            }
            else if(x[i]=='1'){
                if(a>b)
                {b+='1';a+='0';}
                else
                {b+='0';a+='1';}
            }
            else{b+='0';a+='0';}
        }
        cout<<a<<endl;
        cout<<b<<endl;
    }
    return 0;
}