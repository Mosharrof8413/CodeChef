
/*
 Problem : https://www.codechef.com/LTIME108C/problems/WATERFLOW

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
        ll w,x,y,z;
        cin>>w>>x>>y>>z;
        w+=y*z;
        if(w==x)cout<<"filled"<<endl;
        else if(w>x)cout<<"overflow"<<endl;
        else cout<<"unfilled"<<endl;
    }

}

//Alhamdulillah..


/*
input :

3
1 2 3 4
10 70 10 6
2 100 4 3



Output:

overFlow
filled
Unfilled





*/










