
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    scanf("%lld",&t);
    for(ll test=1;test<=t;test++)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%k==0)v.push_back(1);
            else v.push_back(0);
        }
        for(ll i=0;i<n;i++)cout<<v[i];
        cout<<endl;


    }
}
    //Alhamdulilla...
