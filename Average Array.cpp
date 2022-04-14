/*
 Problem : https://www.codechef.com/START34C/problems/AVGARR

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
        ll n,x;
        cin>>n>>x;
        vector<ll>v;
        ll okk=n/2;
        ll done=0,sum=0,well=x;

        if(n%2)
        {
            for(ll i=1; i<=okk; i++)
            {
                v.PB(++x);
            }
            x=well;
            v.PB(x);
            for(ll i=1; i<=okk; i++)
            {
                v.PB(--x);
            }

        }
        else
        {

            for(ll i=1; i<=okk; i++)
            {
                v.PB(++x);
            }
            x=well;
            for(ll i=1; i<=okk; i++)
            {
                v.PB(--x);
            }
        }
        for(auto ans : v )cout<<ans<<" ";
        cout<<endl;


    }
}

//Alhamdulillah..


/*
input:
3
3 7
5 1
1 10

Output:

5 10 6
1 2 3 4 -5
10



*/




