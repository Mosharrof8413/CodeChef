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
     ll n,k;
     cin>>n>>k;
     ll a[n];
     ll sum=0;
     for(ll i=0;i<n;i++)
     {
     	cin>>a[i];
     	sum+=a[i];
     }
     if(sum%k)cout<<1<<endl;
     else cout<<0<<endl;
    }
  }

//Alhamdulillah...
