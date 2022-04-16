/*
 Problem : https://www.codechef.com/LTIME107C/problems/PAIRPAIN

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
      ll one=0,two=0;
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
          if(a[i]==1)one++;
          if(a[i]==2)two++;
      }

      n-=one;
      ll ans=n*one;
      ans+=((one*(one-1))/2);
      ans+=((two*(two-1))/2);
      cout<<ans<<endl;
    }
}

//Alhamdulillah..


/*
input:
3
4
3 3 10 10
10 10 3 3
5
1 2 3 4 5
6 7 8 9 10
6
72 101 108 108 111 44
10 87 111 114 108 100



Output:

0
8
218



*/





