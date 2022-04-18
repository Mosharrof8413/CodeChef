/*
 Problem : https://www.codechef.com/START33C/problems/NONADJFLIP

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
     string st;
     cin>>st;
     bool f=false;
     ll one=0;
     for(ll i=0;i<n-1;i++)
     {
         if(st[i]=='1')one++;
         if(st[i]=='1' && st[i+1]=='1')f=true;
     }
     if(st[n-1]=='1')one++;

     if(f)cout<<2<<endl;
     else if(one) cout<<1<<endl;
     else cout<<0<<endl;
    }
}

//Alhamdulillah..


/*
input:

3
6
101001
5
00000
3
111


Output:

1
0
2


*/





