
/*
 Problem Link : https://codeforces.com/problemset/problem/287/A
 */

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second


ll gcd ( ll a, ll b )
{
    return __gcd ( a, b );
}
ll lcm ( ll a, ll b )
{
    return a * ( b / gcd ( a, b ) );
}

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/*
const int MX=1e7+123;
bitset<MX>is_prime;
vector<ll>primes;
void primeGen(ll n)
{
    ll sq=sqrt(n);
    for(ll i=3; i<=n; i+=2)is_prime[i]=1;

    for(ll i=3; i<=sq; i+=2)
    {
        if(is_prime[i]==1)
        {
            for(ll j=i*i; j<=n; j+=(i+i))
                is_prime[j]=0;
        }
    }
    primes.PB(2);
    is_prime[2]=1;
    for(ll i=3; i<=n; i+=2)
    {
        if(is_prime[i]==1)primes.PB(i);
    }
}
ll NOD(ll n)
{
    ll ans=1;
    for(auto u : primes)
    {

        if(u*u > n)break;
        if(n%u==0)
        {
            ll cnt=0;
            while(n%u==0)
            {
                n/=u;
                cnt++;
            }
            cnt++;
            ans*=cnt;
        }
    }
    if(n>1) ans*=2;
    return ans;
}*/
int main()
{
    optimize();
   // ll limt=1e6+123;
    //primeGen(limt);
    ll test;
    cin>>test;
    while(test--)
    {
       ll n;
       cin>>n;
       ll a[n];
       map<ll,ll>mp;
       ll mx=0,ans=0;
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
           mp[a[i]]++;
           if(mp[a[i]]>mx)
           {
               mx=mp[a[i]];
               ans=a[i];
           }

       }
       if(mx==1)
       {
           ans=0;
           sort(a,a+n);
           ll okk=a[n-1];
           for(ll i=0;i<n;i++)
           {
               ans|=(a[i]^okk);
           }
           cout<<okk<<" "<<ans<<endl;
       }
       else
       {
           ll okk=ans;
           ll done=0;
           for(ll i=0;i<n;i++)
           {
               done |=(a[i]^okk);
           }
           cout<<okk<<" "<<done<<endl;
       }
    }
}

//Alhamdulillah...







