/*
 Problem : https://www.codechef.com/LTIME107C/problems/PALINPAIN

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
       ll x,y;
       cin>>x>>y;
       if((x%2 && y%2 )|| (x==1 ||y==1))
       {
           cout<<-1<<endl;
           continue;
       }


       if(x%2==0 && y%2==0)
       {
             string st="",tt="";

          for(ll i=0;i<x;i++)st+='a';
          for(ll i=0;i<y;i++)
          {
              if(i%2==0)
              {
                  st='b'+st;
              }
              else st=st+ 'b';
          }



          for(ll i=0;i<x/2;i++)tt+='a';
          for(ll i=0;i<y;i++)
          {
           tt+='b';
          }
          for(ll i=0;i<x/2;i++)tt+='a';

          cout<<st<<endl<<tt<<endl;
          continue;
       }


       if(x%2==1  && y%2==0)
       {
           string st="",tt="";
          for(ll i=0;i<x;i++)st+='a';
          for(ll i=0;i<y;i++)
          {
              if(i%2==0)
              {
                  st='b'+st;
              }
              else st+='b';
          }

          for(ll i=0;i<y/2;i++)tt+='b';
          tt+='a';
          for(ll i=0;i<y/2;i++)tt+='b';
          for(ll i=0;i<x-1;i++)
          {
              if(i%2==0)
              {
                  tt='a'+tt;
              }
              else tt+='a';
          }
          cout<<st<<endl<<tt<<endl;

       }
       else
       {
           string st="",tt="";
          for(ll i=0;i<y;i++)st+='b';
          for(ll i=0;i<x;i++)
          {
              if(i%2==0)
              {
                  st='a'+st;
              }
              else st+='a';
          }

          for(ll i=0;i<x/2;i++)tt+='a';
          tt+='b';
          for(ll i=0;i<x/2;i++)tt+='a';
          for(ll i=0;i<y-1;i++)
          {
              if(i%2==0)
              {
                  tt='b'+tt;
              }
              else tt+='b';
          }
          cout<<st<<endl<<tt<<endl;
       }
    }
}

//Alhamdulillah..


/*
input:

2
2 4
3 3

Output:

abbbba
babbab
-1



*/





