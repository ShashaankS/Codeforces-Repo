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
        int n;
        cin>>n;
        int a[n];
        fori{cin>>a[i];}

        int maxm=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if((i+1)%2==1)
            maxm=max(maxm,a[i]);
        }
        cout<<maxm<<endl;
    }
    return 0;
}