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
      //vector<ll>a(n);
      ll b[n+1]={0},a[n+1];
      bool f=false;
      ll cnt=0;
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
          ll d=a[i];
          b[d]++;
        if(b[d]==1)
            {
                cnt++;
        //cout<<b[d]<<endl;
            }
      }
      //ll ans=(m*(m+1))/2;
      if(cnt==m)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;

  }
}

//Alhamdulillah...

