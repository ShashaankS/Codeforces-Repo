using lli=long long int;
using ll= long long;
using ull=unsigned long long;
#define fori for(ll i=0; i<n; i++)
#define forj for(ll j=0; j<n; j++)

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
        lli a[n];
        fori{cin>>a[i];}
        
        lli sum=0;
        int count=0;
        lli mx = INT_MIN;
        for(int i=0;i<n;i++){
            sum+=a[i];
            mx=max(mx,a[i]);
            if(sum==2*mx)
                {count++;}
        }

        cout<<count<<endl;
    }
    return 0;
}