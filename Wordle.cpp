/*
 Problem : https://www.codechef.com/MARCH221C/problems/WORDLEv

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


vector<ll>v;

int main()
{
    optimize();

      ll t;
      cin>>t;
      while(t--)
      {
         string st,tt;
         cin>>st>>tt;
         for(ll i=0;i<5;i++)
         {
             if(st[i]==tt[i])cout<<"G";
             else cout<<"B";
         }
         cout<<endl;
      }
}

//Alhamdulillah..


/*
3
ABCDE
EDCBA
ROUND
RINGS
START
STUNT

Output:

BBGBB
GBBBB
GGBBG

*/


