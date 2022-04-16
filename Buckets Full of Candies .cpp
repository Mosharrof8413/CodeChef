/*
 Problem : https://www.codechef.com/LTIME107C/problems/BFOC/

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
      ll n,m,k;
      cin>>n>>m>>k;
      ll tot=n+k-1;
      ll re=m%tot;
      if(n==0)
      {
          cout<<m<<endl;
          continue;
      }
      if(re>=k && re<tot)cout<<0<<endl;
      else cout<<re<<endl;
    }
}

//Alhamdulillah..


/*
input:

4
2 8 2
3 9 2
3 10 2
4 100 10


Output:

0
1
0
9


*/






