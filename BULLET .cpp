/*
 Problem : https://www.codechef.com/LTIME107C/problems/BULLET

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
       ll a,b,c;
       cin>>a>>b>>c;
       ll ans=b/a;
       ans=max(0LL,c-ans);
       cout<<ans<<endl;
    }
}

//Alhamdulillah..


/*
input:


Output:

8



*/





