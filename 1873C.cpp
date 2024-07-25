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
        string a[10];
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(a[i][j]=='X')
                {
                    int x=i+1;
                    int y=j+1;
                    if(x<=5 && y<=5)
                    {
                        sum+=min(x,y);
                    }
                    else if(x<=5 && y>5)
                    {
                        sum+=min(x,10-y+1);
                    }
                    else if(x>5 && y>5)
                    {
                        sum+=min(10-x+1,10-y+1);
                    }
                    else if(x>5 && y<=5)
                    sum+=min(10-x+1,y);
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}