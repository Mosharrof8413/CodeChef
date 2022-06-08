/*

 Problem link : https://www.codechef.com/START42D/problems/HOWMANYMAX/

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
      string st;
      cin>>st;
      ll cnt=1;
      ll pos=0;
      set<ll>s;
      bool f=false;
      for(ll i=0;i<n;i++)
      {
          if(st[i]=='1')
          {
              f=true;
              continue;
          }
          if(st[i]=='0' && f)
          {
              cnt++;
              f=false;
          }
      }
      cout<<cnt<<endl;
    }


}

//Alhamdulillah..

/*
input :

3
2
0
7
000111
6
11100



output :

1
1
2



*/















