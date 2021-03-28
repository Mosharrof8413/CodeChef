

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define mxx 10000

int main()
{
  ll t;
   cin>>t;
  while(t--)
  {
     ll n,k;
     cin>>n>>k;
     if(n%k==0)
     {
         cout<<n/k<<" "<<k<<endl;
         continue;
     }
     ll ans=n/k+1;
     ll okk=n%k;
     cout<<ans<<" "<<okk<<endl;
  }
}

//Alhamdulillah...
