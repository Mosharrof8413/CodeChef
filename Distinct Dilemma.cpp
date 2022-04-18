/*
 Problem : https://www.codechef.com/START33C/problems/DISTDILEM

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
       ll sum=0;
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
           sum+=a[i];
       }
       ll ans=0,cnt=0;
       for(ll i=1; ; i++)
       {
           ans+=i;
           if(ans>sum)break;
           cnt++;
       }
       cout<<cnt<<endl;

    }
}

//Alhamdulillah..


/*
input:

2
3
1 2 4
4
1 1 3 4


Output:

3
3



*/







