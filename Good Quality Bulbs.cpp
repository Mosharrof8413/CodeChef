/*
 Problem : https://www.codechef.com/START34C/problems/BULBLIFE

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
        ll n,k;
        cin>>n>>k;
        ll sum=0;
        for(ll i=0;i<n-1;i++)
        {
            ll x;
            cin>>x;
            sum+=x;
        }
        ll ans=n*k;
        ans=max(0LL,ans-sum);
        cout<<ans<<endl;
    }
}

//Alhamdulillah..


/*
input:

3
3 4
1 5
4 2
5 8 6
3 1000
0 0

Output:

6
0
3000





*/






