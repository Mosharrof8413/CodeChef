
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
      map<char,ll>mp;
      for(ll i=0;i<st.size();i++)
      {
      	mp[st[i]]++;
      }
      ll n=st.size();
      ll cnt=0;
      for(ll i=0;i<st.size();i++)
      {
      	if(mp[st[i]]>=2 and n>=3)
      	{
      		n-=3;
      		mp[st[i]]-=2;
      		cnt++;
      	}
      }
      cout<<cnt<<endl;
    }
  }

//Alhamdulillah...

