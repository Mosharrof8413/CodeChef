#include<bits/stdc++.h>
using namespace std;
//freopen("input.txt" , "r" , stdin);
//freopen("output.txt" , "w" , stdout);
#define ll            long long
#define endl          '\n'
//ll ans=floor(y*log10(x))+1;   number of digits in x^y
//for(ll i=1;i<1000000;i++)for(ll j=i;j<1000000;j+=i)divisors[j]++;  counting divisors or NOD(1 to N) ..its works like as prime_factorizations...
//for(ll i=1;i<1000000;i++)for(ll j=i;j<1000000;j+=i)sum_of_divisors[j]+=i;  sum of divisors ... sum_of_divisors(6)=1+2+3+6=12......
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define w(x)          ll x;cin>>x;while(x--)
#define IOS           ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i,n)      for(ll i=0;i<n;i++)
#define REP1(i1,n)    for(ll i=1;i<n;i++)
#define pb             push_back
#define mk             make_pair
#define ff             first
#define ss             second
const double pi = acos(-1.0);
#define  mpee            map<ll,ll>
#define  v             vector<ll>
#define  be            begin()
#define  e             end()
#define mod            1000000007
#define Max              100009s
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      ll a,b;
      cin>>a>>b;
      ll chef=a/9;
      ll rick=b/9;
      if(a%9)chef++;
      if(b%9)rick++;
      if(chef>=rick)cout<<1<<" "<<rick<<endl;
      else cout<<0<<" "<<chef<<endl;
  }
}
//for(ll i=0;i<len;i++)cout<<v[i]<<" ";
/*

Alhamdulilla...

*/

