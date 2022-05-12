
/*
 Problem : https://www.codechef.com/START38C/problems/GOODPAIRS

*/

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
/*
const int MX=1e6+123;
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
const int mod=1e9+7;
*/


int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2],b[n+3];
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<n;i++)cin>>b[i];

        map< pair<ll,ll>,ll >mp;
        for(ll i=0;i<n;i++)mp[{a[i],b[i]}]++;

        ll ans=0;

        for(ll i=0;i<n;i++)
        {
            mp[{a[i],b[i]}]--;
            ans+=mp[{b[i],a[i]}];
        }
        cout<<ans<<endl;
    }

}

//Alhamdulillah..


/*
input :

4
3
1 2 3
3 2 1
4
1 2 3 4
5 6 6 7
3
10 10 10
10 10 10
4
4 8 1 1
8 4 1 1



Output:

1
0
3
2




*/











