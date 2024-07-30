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
        n--;
        int a[n];
        fori{cin>>a[i];}

        int sum=0;
        fori{sum+=a[i];}

        cout<<-sum<<endl;
    }
    return 0;
}