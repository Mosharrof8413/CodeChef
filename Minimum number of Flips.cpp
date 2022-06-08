/*

 Problem link : https://www.codechef.com/START42D/problems/MINFLIPS/

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
       ll a[n+2];
       ll neg=0,pos=0;
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]<0)neg++;
           else pos++;
       }
       if(n%2)
       {
           cout<<-1<<endl;
       }
       else
       {
           ll mn=min(neg,pos);
           n/=2;
           n-=mn;
           cout<<n<<endl;
       }

    }


}

//Alhamdulillah..

/*
input :

4
4
1 1 1 1
5
1 -1 1 -1 1
6
1 -1 -1 1 1 1
2
1 -1



output :

2
-1
1
0



*/















