/*
 Problem : https://www.codechef.com/START34C/problems/TRUESCORE

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
       ll a,b;
       cin>>a>>b;
       ll c,d;
       cin>>c>>d;

       if( a<=c && b<=d)cout<<"POSSIBLE"<<endl;
       else cout<<"IMPOSSIBLE"<<endl;

    }
}

//Alhamdulillah..


/*
input:

3
1 5
3 5
3 4
2 6
2 2
2 2


Output:

POSSIBLE
IMPOSSIBLE
POSSIBLE






*/







