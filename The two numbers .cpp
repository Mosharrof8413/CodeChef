/*

 Problem link : https://www.codechef.com/COOK142D/problems/BREAKSTICK

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


int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0)
        {
            ll half=n/2;
            ll f=0,s=0;
            if(half%2)
            {
                f=half-2;
                s=half+2;
            }
            else
            {
                f=half+1;
                s=half-1;
            }
            ll d=f*s;
            d--;
            ll ans=max(d,n-2);
            cout<<ans<<endl;
        }
        else
        {
            ll a=n/2;
            ll b=n/2;
            a++;
            ll gcd=__gcd(a,b);
            ll lcm=a*b/gcd;
            ll ans=max(lcm-gcd,n-2);
            cout<<ans<<endl;
        }
    }


}

//Alhamdulillah..

/*
input :

3
6 1
3 2
4 3


output :

YES
NO
YES


*/













