/*
 Problem : https://www.codechef.com/APRIL222C/problems/GMINEQ

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
      ll a[n];
      ll pos=0,neg=0;
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
          if(a[i]>0)pos++;
          else neg++;
      }

      if(pos<neg)swap(pos,neg);
      ll ans=pos-neg;
      bool f=true;
     // if((n==3 ||n==5) & ans!=1)f=false;
      if(n%2)
      {
          if(ans!=1)f=false;
      }
      if(n%4==0 && ans!=0)f=false;
      if(n%4!=0 && n%2==0)
      {
          if(ans==0 || ans==2)
          {

          }
          else f=false;
      }
      if(f )cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

    }


}

//Alhamdulillah..


/*
input:

3
5
1 1 1 -1 -1
3
1 1 1
6
1 -1 -1 -1 -1 1

Output:

Yes
No
Yes




*/



