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
    int n,m,k;
    cin>>n>>m>>k;
    int count=0;
    int a[n][m]={0};
    for(int i=1;i<=k;i++)
    {
        int x,y;
        cin>>x>>y;
        a[--x][--y]=1;
        if((x>0 && y>0 && a[x-1][y-1]==1 && a[x][y-1]==1 && a[x-1][y]==1)||
            (x<n-1 && y<m-1 && a[x+1][y+1]==1 && a[x][y+1]==1 && a[x+1][y]==1)||
            (x>0 && y<m-1 && a[x-1][y]==1 && a[x][y+1]==1 && a[x-1][y+1]==1)||
            (x<n-1 && y>0 && a[x][y-1]==1 && a[x+1][y-1]==1 && a[x+1][y]==1 ))
            {
                cout<<i<<endl;return 0;
            }
    }
    cout<<0<<endl;
    return 0;
} 