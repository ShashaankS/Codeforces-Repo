using lli=long long int;
using ll= long long;
using ull=unsigned long long;
#define fori for(ll i=0; i<n; i++)
#define forj for(ll j=0; j<n; j++)
#define form for(ll i=0; i<m; i++)
#define fors for(ll i=0; i<s.length(); i++)
#define forv for(ll i=0; i<v.size(); i++)
#define forst for(auto i=st.begin(); i!=st.end(); i++)
#define formst for(auto i=mst.begin(); i!=mst.end(); i++)
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define f first
#define s second
#define sorta sort(a,a+n)
#define sortv sort(v.begin(), v.end())
#define sorts sort(s.begin(), s.end())
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int one=0;
        int zero=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')one++;
            else zero++;
        }

        int len=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                if(zero>0)
                {zero--;len++;}
                else
                break;
            }
            else {if(one>0)
                {one--;len++;}
                else
                break;}
        }
        cout<<s.length()-len<<endl;
    }
    return 0;
}