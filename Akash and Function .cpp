/*
 Problem Link : https://www.codechef.com/MARCH221C/problems/CHFDBT
 */

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

ll gcd ( ll a, ll b )
{
    return __gcd ( a, b );
}
ll lcm ( ll a, ll b )
{
    return a * ( b / gcd ( a, b ) );
}

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int MX=450000;
ll ar[450005];
ll solve(ll n)
{
    ll sq=sqrt(n);
    memset(ar,-1,sizeof(ar));
    ll cnt=0;
    for(ll i=1; i<=sq; i++)
    {
        if(ar[i]==-1)
        {
            cnt++;
            for(ll j=i;j<=sq;j*=2)ar[j]=1;
        }
    }

    return cnt;
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
     n++;
     ll ans=n/2;
     cout<<ans<<endl;
    }


}


//Alhamdulillah..


/*

2
2
5


Output:

1
3



*/



