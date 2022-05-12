
/*
 Problem : https://www.codechef.com/START38C/problems/LOOP

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
        ll a,b,m;
        cin>>a>>b>>m;

        if(a<b)
        {
            ll ans=min(b-a,a+m-b);
            cout<<ans<<endl;
        }
        else
        {
            ll ans=min(a-b,m-a+b);
            cout<<ans<<endl;
        }
    }

}

//Alhamdulillah..


/*
input :

4
1 3 100
1 98 100
40 30 50
2 1 2




Output:

2
3
10
1





*/












