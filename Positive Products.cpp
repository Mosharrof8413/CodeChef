/*
 Problem : https://www.codechef.com/START34C/problems/POSPROD

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
        ll posi=0,neg=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)posi++;
            else if(a[i]<0)neg++;
        }
        ll ans=posi*(posi-1)/2;
        ans+=(neg*(neg-1)/2);
        cout<<ans<<endl;
    }
}

//Alhamdulillah..


/*
input:

3
5
1 -3 0 2 -1
4
-1 -1 -1 -1
4
0 1 2 3


Output:

2
6
3




*/





