
/*
 Problem : https://www.codechef.com/MAY221C/problems/QUEENATTACK

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
       ll x,y;
       cin>>x>>y;
       ll diagonal_f=0,diagonal_s=0;

       diagonal_f=min(n-x,y-1)+min(x-1,n-y);
       diagonal_s=min(x-1,y-1)+min(n-x,n-y);
       ll cover=n+n+diagonal_f+diagonal_s;
       cover-=2;
       cout<<cover<<endl;
    }

}

//Alhamdulillah..


/*
input :

5
1 1 1
3 2 2
3 2 1
2 2 2
150 62 41

Output:

0
8
6
3
527



*/










