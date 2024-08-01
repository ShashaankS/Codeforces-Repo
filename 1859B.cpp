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
        int n;
        cin>>n;
        vector<vector<int>>v(n,vector<int>(0));
        int min1=INT_MAX;
        int min2=INT_MAX;
        ll sum=0;
        fori{
            int m;
            cin>>m;
            v[i].resize(m);
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
            sort(v[i].begin(),v[i].end());
            min1=min(min1,v[i][0]);
            if(v[i].size()>1)
            {
                sum+=v[i][1];
                min2=min(min2,v[i][1]);
            }
        }
        cout<<min1+sum-min2<<endl;
    }
    return 0;
}