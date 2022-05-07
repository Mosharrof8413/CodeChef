
/*
 Problem : https://www.codechef.com/START37C/problems/LAPTOPREC/

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
        map<ll,ll>mp;
        ll n;
        cin>>n;
        ll a[n];
        ll mx=0,ans=0;;
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
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            if(mp[a[i]]==mx)
            {
                cnt++;
                mp[a[i]]=0;
            }
        }
        if(cnt==1)cout<<ans<<endl;
        else cout<<"CONFUSED"<<endl;


    }

}

//Alhamdulillah..


/*
input :

4
5
4 4 4 2 1
7
1 2 3 4 5 6 6
6
2 2 3 3 10 8
4
7 7 8 8



Output:

4
6
CONFUSED
CONFUSED



*/







