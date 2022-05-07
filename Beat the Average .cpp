
/*
 Problem : https://www.codechef.com/START37C/problems/ABOVEAVG

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

       ll n,m,x;
       cin>>n>>m>>x;
       if(x==m)
       {
           cout<<0<<endl;
           continue;
       }
       ll total=x*n;
       total/=(x+1);
       cout<<total<<endl;

    }

}

//Alhamdulillah..


/*
input :

4
2 100 50
3 100 50
5 40 40
10 50 49

Output:

1
2
0
9


*/









