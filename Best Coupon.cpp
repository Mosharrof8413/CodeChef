/*
 Problem : https://www.codechef.com/APRIL222C/problems/CHEAPFOOD

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

const ll MX=2e6+123;
bitset<MX>is_prime;
vector<ll>primes;
ll solve(ll n)
{
    ll sq=sqrt(n);
    for(ll i=2;i<=sq;i++)
    {
        if(n%i==0)return 1;
    }
    return 0;
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
      n/=10;
      ll ans=100;
      ans=max(ans,n);
      cout<<ans<<endl;
    }


}

//Alhamdulillah..


/*
input:

3
300
1300
1000

Output:

100
130
100



*/


