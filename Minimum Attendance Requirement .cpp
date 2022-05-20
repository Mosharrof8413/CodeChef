
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
int main()
  {
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      ll re=120-n;
      string st;
      cin>>st;
      ll cnt=0;
      for(ll i=0;i<n;i++)
      {
      	if(st[i]=='1')cnt++;
      }
      re+=cnt;
      ll ans=(re*100)/120;
      if(ans>=75)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
  }

//Alhamdulillah...
