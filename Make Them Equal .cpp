/*
 Problem : https://www.codechef.com/START33C/problems/MTE

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
ll sum;
ll gcd (ll a,ll b)
{
    if(b==0)return a;

    return gcd(b,b%a);
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
       ll zero=0,odd=0,even=0;
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]==0)zero++;
           else if(a[i]%2==0)even++;
           else odd++;
       }
       if(zero==n || zero+even==n || odd==n)
       {
           cout<<0<<endl;
           continue;
       }
       ll ans=0;
       if(odd>=even)
       {
           if(odd%2==0)
           ans=min(odd/2,even+zero);
           else ans=even+zero;
       }
       else
        {
           if(odd%2==0)
              {
                  ans=odd/2;
              }
              else
                {
                    ans=even+zero;
                }
        }

        cout<<ans<<endl;

    }
}

//Alhamdulillah..


/*
input:

2
4
1 2 3 4
5
1 1 1 1 1



Output:

1
0



*/






