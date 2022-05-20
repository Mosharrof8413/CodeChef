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
   ll n,d;
   cin>>n>>d;
   ll a[n];
   ll risk=0;
   for(ll i=0;i<n;i++)
   {
   	cin>>a[i];
   	if(a[i]<=9 || a[i]>=80)risk++;
   }
   if(d==1)
   {
   	cout<<n<<endl;
   	continue;
   }
   ll safe=n-risk;
   ll ans=ceil((double)safe/d);
   //cout<<ans<<endl;
   ans+=ceil((double)risk/d);
   cout<<ans<<endl;
 }
}

//Alhamdulillah...
