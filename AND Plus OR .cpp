#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define pb              push_back
#define mk              make_pair
#define mx              1000000
/*vector<ll>primes,ans;
bitset<mx>bs;
   void seive()
{
	bs.set();  //111
	bs[0]=bs[1]=0;
	for(ll i=4;i<=mx;i+=2)bs[i]=0;
	for(ll i=3;i<=sqrt(mx);i+=2)
	{
		if(bs[i])
		{
			for(ll k=i*i;k<=mx;k+=2*i)bs[k]=0;
		}
	}
   for(ll i=1;i<=mx;i++)if(bs[i])primes.pb(i);

}
vector<ll>v;
ll prime_factorization(ll n)
{
	ll ans=1,cnt=0;
	for(ll i=0;i<primes.size()&& primes[i]<=sqrt(n);i++)
	{
		cnt=0;
		if(n%primes[i]==0)
		{
			while(n%primes[i]==0)
			cnt++,n/=primes[i];
			ans*=primes[i];
		}
		v.push_back(cnt);
		cnt=0;
	}
	if(n>1){
		ans*=n;
		cnt++;
		v.push_back(cnt);
	}
	//cout<<ans<<endl;
	for(ll i=0;i<v.size();i++)cout<<v[i]<<" ";
	ll mxx=0,x;
	for(ll i=0;i<v.size();i++)
         mxx=max(mxx,v[i]);
 	 //cout<<mxx<<endl;
 	 while(1)
 	 {
 	 	if((mxx &(mxx-1))==0)break;
 	 	 mxx++;

 	 }
 	 cout<<mxx;


}
 */
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<0<<" "<<n<<endl;
	}

}
//Alhaduillah....
