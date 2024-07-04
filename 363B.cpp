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
    int n,k;
    cin>>n>>k;
    int a[n];
    fori{cin>>a[i];}

    int i=0;
    lli sum=0;
    
    for(int i=0;i<k;i++){sum+=a[i];}
    lli minS=sum;
    int minIdx=1;
    for(int i=k;i<n;i++)
    {
        sum+=a[i]-a[i-k];
        if(sum<minS)
        {
            minS=sum;
            minIdx=i-k+2;
        }
    }

    cout<<minIdx<<endl;
    return 0;
}