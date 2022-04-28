
/*
 Problem : https://www.codechef.com/START36C/problems/RED1

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
int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(n%2)
        {
            cout<<1<<endl;
            continue;
        }

        ll sqr=sqrt(n);
        if(sqr*sqr==n)
        {
            cout<<1<<endl;
            continue;
        }

        ll cnt=0;
        while(n%2==0)
        {
            n/=2;
            cnt++;
        }
        if(cnt%2)cout<<-1<<endl;
        else
            cout<<2<<endl;

    }

}

//Alhamdulillah..


/*
input :

2
25
24



Output:

1
-1


*/





