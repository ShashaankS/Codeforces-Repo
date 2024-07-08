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
        int n,m;
        cin>>n>>m;
        vector<vector<int>>a(n,vector<int>(m));
        vector<vector<int>>b(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                char ch;
                cin>>ch;
                a[i][j]=ch-'0';
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                char ch;
                cin>>ch;
                b[i][j]=ch-'0';
            }
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                int diff=(3+(b[i][j]-'0')-(a[i][j]-'0'))%3;
                    a[i][j]=(a[i][j]+diff)%3;
                    a[i+1][j+1]=(a[i+1][j+1]+diff)%3;
                    a[i+1][j]=(a[i+1][j]+3-diff)%3;
                    a[i][j+1]=(a[i][j+1]+3-diff)%3;
            }
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                // cout<<a[i][j];
                if(a[i][j]!=b[i][j])
                flag=1;
            }
            // cout<<endl;
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
    return 0;
}