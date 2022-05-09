
/*
 Problem : https://www.codechef.com/MAY221C/problems/PUSH7PA

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

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        map<ll,ll>mp;
        ll mx=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(ll i=0; i<n; i++)
        {
            ll cur=a[i]+mp[a[i]]-1;
            mx=max(mx,cur);
        }
        cout<<mx<<endl;
    }

}

//Alhamdulillah..


/*
input :

2
4
1 2 1 3
1
2

Output:

3
2



*/









