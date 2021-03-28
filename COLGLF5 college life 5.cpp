

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define mxx 10000
int M;
ll mod(ll x)
{
    return ((x%M+M)%M);
}
ll mul(ll a,ll b)
{
    return mod(mod(a)*mod(b));
}
ll big_mod(ll base,ll power,ll m)
{
    ll res=1;
    if(base==0)return 0;
    if(power==0)return 1LL;
    if(power==1)return mod(base);
    while(power)
    {
        if(power%2==1)
         {
             res= mul(res,base);
         }
         base=mul(base,base);
         power/=2;
    }
    return res;
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,m;
      cin>>n>>m;

      ll f[n+1],c[m+1];
      vector<pair<ll,ll> >v;
      for(ll i=0;i<n;i++)
      {
          cin>>f[i];
          v.pb(mk(f[i],1));
      }
      for(ll i=0;i<m;i++)
      {
          cin>>c[i];
          v.pb(mk(c[i],2));
      }

      sort(c,c+m);
      sort(f,f+n);
      sort(v.begin(),v.end());
      ll flag=1,cnt=0;
      if(f[0]==v[0].first)flag=1;
       else cnt++,flag=2;
      for(ll i=1;i<v.size();i++)
      {

          if(v[i].second==1 && flag==2)
          {
              cnt++;
              flag=1;
          }
          if(v[i].second==2 && flag==1)
          {
              cnt++;
              flag=2;
          }
      }
      cout<<cnt<<endl;
  }
}

//Alhamdulillah...
