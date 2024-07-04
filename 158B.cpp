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
    int n;
    cin>>n;
    int a[n];
    fori{cin>>a[i];}

    int taxi=0;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]==1)count1++;    
        if(a[i]==2)count2++;    
        if(a[i]==3)count3++;    
        if(a[i]==4)count4++;    
    }
    taxi+=count4;
    taxi+=count3;

    if(count1>=count3)
    count1=count1-count3;
    else
    count1=0;

    taxi+=count2/2;
    count2=count2%2;

    if(count2>0)
    {
        taxi++;
        if(count1>=2)
        count1-=2;
        else
        count1=0;
    }
    
    taxi+=count1/4;
    count1=count1%4;
    if(count1>0)
    taxi++;

    cout<<taxi<<endl;
    return 0;
}