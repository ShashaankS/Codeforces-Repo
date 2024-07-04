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
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        lli a[n];
        fori{cin>>a[i];}
        lli b[n+1];
        for(ll i=0;i<n+1;i++){cin>>b[i];}
        ll count=0;
        ll dist=0;
        int flag=0;
        fori{
            if((b[n]<=a[i] && b[n]>=b[i])|| (b[n]>=a[i] && b[n]<=b[i]))
            {
                count++;
                flag=1;
            }
            else
            {
                dist = min(dist,b[n]-a[i]);
            }
            count+=abs(a[i]-b[i]);
        }
        //  if(flag=1)
        //     cout<<count<<endl;
        //     else
        //     cout<<count+dist<<endl;
        // if(b[n]==a[n-1])
        // count++;
        // else
        // {
        //     count+=abs(b[n]-a[n-1])+1;
        // }
        cout<<count<<endl;
    }
    return 0;
}