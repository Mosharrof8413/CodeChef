#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
int main()
  {
    ll t;
    cin>>t;
    while(t--)
    {
     string st;
     cin>>st;
     ll one=0,zero=0;
     for(ll i=0;i<st.size();i++)
     {
     	if(st[i]=='0')zero++;
     	else one++;
     }
     if(zero ==st.size() || one ==st.size() || st.size()%2==1)cout<<-1<<endl;
     else
     {
     	ll re=abs(one-zero);
     	cout<<re/2<<endl;
     }
    }
  }

//Alhamdulillah...
