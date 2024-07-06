using lli=long long int;
using ll= long long;
using ull=unsigned long long;
#define fori for(ll i=0; i<n; i++)
#define forj for(ll j=0; j<n; j++)

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
        cin>>s;
        lli count=0;
        int ct=0;
        for(auto c:s)
        {
            if(c=='1')
                ct++;
            else if(c=='0' && ct)
             count += ct+1;
        }
        cout<<count<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}