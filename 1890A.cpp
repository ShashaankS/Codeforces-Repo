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
        int a[n];
        fori{cin>>a[i];}

        map<int,int>freq;
        fori{
            freq[a[i]]++;
        }
        if(freq.size()==1)
        {
            cout<<"Yes"<<endl;
        }
        else if(freq.size()>2)
        {
            cout<<"No"<<endl;
        }
        else
        {
            vector <int>ans;
            for(auto it:freq)
            {
                ans.push_back(it.second);
            }
            if(abs(ans[0]-ans[1])<=1)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
    }
    return 0;
}