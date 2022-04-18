/*
 Problem : https://www.codechef.com/START33C/problems/MINCARS

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
      ll ans=n/4;
      if(n%4)ans++;
      cout<<ans<<endl;
    }
}

//Alhamdulillah..


/*
input:

4
4
2
7
98

Output:

1
1
2
25

*/




