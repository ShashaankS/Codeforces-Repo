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
        int n,k,q;
        cin>>n>>k>>q;
        vector<ll>v(n);
        fori{cin>>v[i];}
        int i=0;
        ll days=0;
        while(i<n)
        {
            if(v[i]>q)
            {i++;continue;}
            int j=i;
            while(j<n && v[j]<=q)
            {
                j++;
                days+=max(0,j-i+1-k);
            }
            i=j;
        }
        cout<<days<<endl;
    }
    return 0;
}